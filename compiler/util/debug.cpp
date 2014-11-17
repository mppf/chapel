#include "debug.h"
// This is debug-new branch !
#include "stringutil.h"
#include "expr.h"
#include "codegen.h"
#include "symbol.h"
#include "../main/version.h"
#include "vec.h"
#include "type.h"
#include "alist.h"

#ifdef HAVE_LLVM
#include "llvmUtil.h"
#include "llvm/ADT/ArrayRef.h"
//-----added by Hui Zhang-----//
#include "genret.h" 
#include "llvm/Support/Dwarf.h"
#include "llvm/Support/raw_os_ostream.h"
#include <iostream>
#include "llvm/Assembly/Writer.h"
/*
LLVM provides a class called DIBuilder, you pass the LLVM module to this
class and it will attach the debug information to the LLVM code after the
call to finalize() on DIBuilder. The initialization happens in the
constructor of debug_data (inlined in the header). It is instanced during
codegen after setting up the LLVM module and put into debug_info. If the
-g flag wasn't passed to the compiler then debug_info is null. The
finalize call happens in codegen() right after the finishClangGeneration()
call.
As for all the additional data structures, all of that was built into LLVM
rather than me. The functions to create the debug information requires the
DI* types. It sort of makes sense to me, since it is building a DWARF tree
rather than building LLVM IR. It starts at the top level with the
create_compile_unit() call just before working through the modules and
attaching the simple types and building up more complex structures from
there. Getting things setup so that I can get a DISubroutine to pass to
SetCurrentDebugLocation() is needed to get information like line numbers
into the binary. So I think that the only new data structure that I'm
creating myself is the debug class itself.


See 
http://llvm.org/docs/SourceLevelDebugging.html
for more information on LLVM debug information.

*/

// Note: All char strings must be the same size
// Very hacky, but completely legal and functional. Only issue is that file_name will have garbage from beyond full_path.
// garbage issue could be solved with scrubbing, if it matters.

extern char *current_dir;
//const char *null_name = "<internal>";

/////////////////////////////////////////////////
void printTypeInfo(Type *type, llvm::Type* ty)
{
    //llvm::Type *ty = type->symbol->llvmType;
    printf("IN ty->isPointerTy\n");
    printf("Everything about type:\n");
    printf("type->symbol->name=%s\ttype->astTag=%d\ttype->defaultValue=%s\n",
	    type->symbol->name,type->astTag,type->defaultValue->name);
    printf("Everything about llvmType:\n");
    llvm::raw_os_ostream OS(std::cout);
    ty->print(OS); //print function in llvm::Type
}
/////////////////////////////////////////////////

void debug_data::create_compile_unit(const char *file, const char *directory, bool is_optimized, const char *flags)
{
  this->optimized = is_optimized;
  char version[128];
  char chapel_string[256];
  get_version(version);
  snprintf(chapel_string, 256, "Chapel version %s", version);
  //the blank string here is meant to be the compile flags, just not sure how to grab that right now.
  this->dibuilder.createCompileUnit(DW_LANG_chapel, file, directory, chapel_string, is_optimized, flags,0);
}

llvm::DIType debug_data::construct_type(Type *type)
{
  GenInfo* info = gGenInfo;
  LLVM_TARGET_DATA * layout = info->targetData;

  llvm::Type* ty = type->symbol->llvmType;
  //const char* cname = type->symbol->cname;
  const char* name = type->symbol->name;
  ModuleSymbol* defModule = type->symbol->getModule();
  const char* defFile = type->symbol->fname();
  int defLine = type->symbol->linenum();

  if(!ty) return llvm::DIType();
  if(ty->isIntegerTy()) {
    return this->dibuilder.createBasicType(
        name,
        layout->getTypeSizeInBits(ty),
        8*layout->getABITypeAlignment(ty),
        (is_signed(type))?
                      (llvm::dwarf::DW_ATE_signed):
                      (llvm::dwarf::DW_ATE_unsigned));
  } else if(ty->isFloatingPointTy()) {
    return this->dibuilder.createBasicType(
        name,
        layout->getTypeSizeInBits(ty),
        8*layout->getABITypeAlignment(ty),
        llvm::dwarf::DW_ATE_float);
  } else if(ty->isPointerTy()) {
      ///////////////////
      printf("\nI'm HERE 1 ! type: %s astTag=%i\n",type->symbol->name,type->astTag);
      //////////////////
      //------------added by Hui Zhang-------------------------//

      //--------------------------------------------------------//
      if(type != type->getValType()){ //Add this condition to avoid segFault, leave it to unhandled
	/////////////////////////////  
	printf("I'm HERE 2 ! type: %s astTag=%i\n",type->symbol->name,type->astTag);
	////////////////////////////
	return this->dibuilder.createPointerType(
        get_type(type->getValType()),
        layout->getPointerSizeInBits(ty->getPointerAddressSpace()),
        0, /* alignment */
        name);
      }
  } else if(ty->isStructTy() && type->astTag == E_AggregateType) {
      ////////////////////////////////////////////////////
      printf("I'm in ty->isStructTy() && type->astTag == E_AggregateType\n");
      /////////////////////////////////////////////////////
    AggregateType *this_class = (AggregateType *)type;
    llvm::SmallVector<llvm::Value *, 8> EltTys;
    llvm::DIType derivedFrom;
    if( type->dispatchParents.length() > 0 )
      derivedFrom = get_type(type->dispatchParents.first());

    const llvm::StructLayout* slayout = NULL;
    llvm::StructType* struct_type = llvm::cast<llvm::StructType>(ty);
    slayout = layout->getStructLayout(struct_type);

    for_fields(field, this_class) {
      // field is a Symbol
      const char* fieldDefFile = field->defPoint->fname();
      int fieldDefLine = field->defPoint->linenum();
      TypeSymbol* fts = field->type->symbol;
      llvm::Type* fty = fts->llvmType;

      llvm::DIType mty = this->dibuilder.createMemberType(
        get_module_scope(defModule),
        field->name,
        get_file(fieldDefFile),
        fieldDefLine,
        layout->getTypeSizeInBits(fty),
        8*layout->getABITypeAlignment(fty),
        slayout->getElementOffsetInBits(this_class->getMemberGEP(field->name)),
        0,
        get_type(field->type));
      EltTys.push_back(mty);
    }

    if(this_class->aggregateTag == AGGREGATE_RECORD) {
	////////////////////////////////////////////////////
	printf("I'm in AGGREGATE_RECORD\n");
	printf("\ttype: %s  type->astTag=%i  llvmType->getTypeID=%i\n",type->symbol->name, type->astTag, type->symbol->llvmType->getTypeID());
	///////////////////////////////////////////////////
      return this->dibuilder.createStructType(
	  get_module_scope(defModule),
          name,
          get_file(defFile),
          defLine,
          layout->getTypeSizeInBits(ty),
          8*layout->getABITypeAlignment(ty),
          0,
          derivedFrom,
          this->dibuilder.getOrCreateArray(EltTys));
    } else if(this_class->aggregateTag == AGGREGATE_CLASS) {
	////////////////////////////////////////////////////
	printf("I'm in AGGREGATE_CLASS\n");
	printf("\ttype: %s  type->astTag=%i  llvmType->getTypeID=%i\n",type->symbol->name, type->astTag, type->symbol->llvmType->getTypeID());
	///////////////////////////////////////////////////
      return this->dibuilder.createStructType( //why NOT use createClassType??
          get_module_scope(defModule),
          name,
          get_file(defFile),
          defLine,
          layout->getTypeSizeInBits(ty),
          8*layout->getABITypeAlignment(ty),
          0,
          derivedFrom,
          this->dibuilder.getOrCreateArray(EltTys));
    } else if(this_class->aggregateTag == AGGREGATE_UNION) {
 	////////////////////////////////////////////////////
	printf("I'm in AGGREGATE_UNION\n");
	printf("\ttype: %s  type->astTag=%i  llvmType->getTypeID=%i\n",type->symbol->name, type->astTag, type->symbol->llvmType->getTypeID());
	////////////////////////////////////////////////////    
      return this->dibuilder.createUnionType(
          get_module_scope(defModule),
          name,
          get_file(defFile),
          defLine,
          layout->getTypeSizeInBits(ty),
          8*layout->getABITypeAlignment(ty),
          0,
          this->dibuilder.getOrCreateArray(EltTys));
    }
  }

  printf("Unhandled type: %s\n\ttype->astTag=%i\n", type->symbol->name, type->astTag);
  if(type->symbol->llvmType) {
    printf("\tllvmType->getTypeID() = %i\n", type->symbol->llvmType->getTypeID());
    //llvm::raw_os_ostream OS(std::cout);
    //type->symbol->llvmType->print(OS);
    //printf("\n");
  } else {
    printf("\tllvmType is NULL\n");
  }

  //return this->dibuilder.createUnspecifiedType(name);
  llvm::DIType ret;
  return ret;
}

llvm::DIType debug_data::get_type(Type *type)
{
  if( NULL == type->symbol->llvmDIType ) {
    type->symbol->llvmDIType = construct_type(type);
  }
  return llvm::DIType(type->symbol->llvmDIType);
}

llvm::DIFile debug_data::construct_file(const char *fpath)
{
  // Create strings for the directory and file.
  const char* last_slash;
  const char* file;
  const char* directory;

  last_slash = strrchr(fpath, '/');
  if( last_slash ) {
    file = astr(last_slash+1);
    directory = asubstr(fpath, last_slash);
  } else {
    file = fpath;
    directory = astr(current_dir);
  }

  return this->dibuilder.createFile(file, directory);
}

llvm::DIFile debug_data::get_file(const char *fpath)
{
  // First, check to see if it's already a in our hashtable.
  if( this->filesByName.count(fpath) > 0 ) {
    return this->filesByName[fpath];
  }

  // Otherwise, construct the type, add it to the map,
  // and then return it.
  llvm::DIFile dif = construct_file(fpath);
  this->filesByName[fpath] = dif;
  return dif;
}

llvm::DINameSpace debug_data::construct_module_scope(ModuleSymbol* modSym)
{
  const char* fname = modSym->fname();
  int line = modSym->linenum();
  llvm::DIFile file = get_file(fname);
  return this->dibuilder.createNameSpace(file, modSym->name, file, line);
}

llvm::DINameSpace debug_data::get_module_scope(ModuleSymbol* modSym)
{
  if( NULL == modSym->llvmDINameSpace ) {
    modSym->llvmDINameSpace = construct_module_scope(modSym);
  }
  return llvm::DINameSpace(modSym->llvmDINameSpace);
}

llvm::DIType debug_data::get_function_type(FnSymbol *function)
{
  const char *file_name = function->astloc.filename;
  llvm::DIFile file = get_file(file_name);
  llvm::SmallVector<llvm::Value *,16> ret_arg_types;

  ret_arg_types.push_back(get_type(function->retType));
  for_formals(arg, function)
  {
    ret_arg_types.push_back(get_type(arg->type));
  }

  llvm::DIArray ret_arg_arr = dibuilder.getOrCreateArray(ret_arg_types);
  return this->dibuilder.createSubroutineType(file, ret_arg_arr);
}

llvm::DISubprogram debug_data::construct_function(FnSymbol *function)
{
  const char *name = function->name;
  const char *cname = function->cname;
  ModuleSymbol* modSym = (ModuleSymbol*) function->defPoint->parentSymbol;
  const char *file_name = function->astloc.filename;
  int line_number = function->astloc.lineno;
  llvm::Function* llFunc = getFunctionLLVM(function->cname); // why cname, not name?

  llvm::DINameSpace module = get_module_scope(modSym);
  llvm::DIFile file = get_file(file_name);

  llvm::DIType function_type = get_function_type(function);

  llvm::DISubprogram ret = this->dibuilder.createFunction(
      module, /* scope */
      name, /* name */
      cname, /* linkage name */
      file, line_number, function_type,
      !function->hasFlag(FLAG_EXPORT), /* is local to unit */
      true, /* is definition */
      line_number, /* beginning of scope we start */
      0, /* flags */
      optimized, /* isOptimized */
      llFunc);
  return ret;
}

llvm::DISubprogram debug_data::get_function(FnSymbol *function)
{
  if( NULL == function->llvmDISubprogram ) {
    function->llvmDISubprogram = construct_function(function);
  }
  return llvm::DISubprogram(function->llvmDISubprogram); 
}

//-----------------Added Debug Functions by Hui ZHang---------------------------//

llvm::DIGlobalVariable debug_data::construct_global_variable(VarSymbol *gVarSym)
{
  GenInfo *info = gGenInfo; 
  const char *name = gVarSym->name;
  const char *cname = gVarSym->cname;
  //ModuleSymbol *modSym = (ModuleSymbol*) gVarSym->defPoint->parentSymbol;
  const char *file_name = gVarSym->astloc.filename;
  int line_number = gVarSym->astloc.lineno;
  
  llvm::DIFile file = get_file(file_name);
  llvm::DIType gVarSym_type = get_type(gVarSym->type); // type is member of Symbol

  GenRet got = info->lvt->getValue(cname); //?use cname since get_function uses it?
  llvm::Value *llVal = NULL;
  if( got.val ) 
    llVal = got.val;  // Not sure if it's a right way to grab the 
	              // corresponding llvm::Value of a VarSymbol
  else {
   // llvm::Value *llVal = NULL;
    printf("Couldn't find the llvm::Value of a gVarSym !\n");
  }
  return this->dibuilder.createGlobalVariable(
      name, /* name */
      cname, /* linkage name */
      file, line_number, gVarSym_type, 
      !gVarSym->hasFlag(FLAG_EXPORT), /* is local to unit */
      llVal); /* llvm::Value */
}

llvm::DIGlobalVariable debug_data::get_global_variable(VarSymbol *gVarSym)
{
  if( NULL == gVarSym->llvmDIGlobalVariable ) {
    gVarSym->llvmDIGlobalVariable = construct_global_variable(gVarSym);
  }
  return llvm::DIGlobalVariable(gVarSym->llvmDIGlobalVariable);
}

llvm::DIVariable debug_data::construct_variable(VarSymbol *varSym)
{
  GenInfo *info = gGenInfo;
  const char *name = varSym->name;
  const char *file_name = varSym->astloc.filename;
  int line_number = varSym->astloc.lineno;
  FnSymbol *funcSym = NULL;
  if(isFnSymbol(varSym->defPoint->parentSymbol))
    funcSym = (FnSymbol*)varSym->defPoint->parentSymbol; //TODO: if the parent is a block
  else {
    //FnSymbol *funcSym = NULL;
    printf("Couldn't find the function parent of this variable!\n");
  }
  llvm::DISubprogram scope = get_function(funcSym); //TODO: Scope maybe just a block 
  llvm::DIFile file = get_file(file_name);
  llvm::DIType varSym_type = get_type(varSym->type);
      
      ///////for testing/////////////
  printf("isType = %d\tvarSym->type->symbol->name = %s\ttype->symbol->llvmType->getTypeID() = %d\n",varSym_type.isType(),varSym->type->symbol->name,varSym->type->symbol->llvmType->getTypeID());
  
  return this->dibuilder.createLocalVariable(
      llvm::dwarf::DW_TAG_auto_variable, /*Tag: local vas declared in the body of a function */
      scope, /* Scope */
      name, /*Name*/
      file, /*File*/
      line_number, /*Lineno*/
      varSym_type, /*Type*/
      true/*AlwaysPreserve, won't be removed when optimized*/
      ); // omit the  Flags and ArgNo
}

llvm::DIVariable debug_data::get_variable(VarSymbol *varSym)
{
  if( NULL == varSym->llvmDIVariable ){
    varSym->llvmDIVariable = construct_variable(varSym);
  }
  return llvm::DIVariable(varSym->llvmDIVariable);
}

//------------------------------------------------------------------------------//
// end if LLVM
#endif
