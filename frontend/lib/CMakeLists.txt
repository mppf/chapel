# Copyright 2021-2022 Hewlett Packard Enterprise Development LP
# Other additional copyright holders may be indicated within.
#
# The entirety of this work is licensed under the Apache License,
# Version 2.0 (the "License"); you may not use this file except
# in compliance with the License.
#
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# USE update_if_different

add_library(libdyno-obj OBJECT)

# turn on position-independent code so we can use the same
# dyno-obj for both a static and dynamic library
set_property(TARGET libdyno-obj PROPERTY POSITION_INDEPENDENT_CODE 1)

# Include the public library .h files as well as any generated .h files
target_include_directories(libdyno-obj PUBLIC
                           ${CHPL_MAIN_INCLUDE_DIR}
                           ${CHPL_INCLUDE_DIR})

# Library code can also use headers from the lib/ directory
# but these are not to be public
target_include_directories(libdyno-obj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# SHELL: is needed here to remove unwanted quotes from the list of arguments
# COMPILE_LANGUAGE:CXX is needed here to make sure we only set the flags
# for C++ files, not C files.
target_compile_options(libdyno-obj PUBLIC SHELL:$<$<COMPILE_LANGUAGE:CXX>:${CHPL_LLVM_COMP_ARGS}>)

add_subdirectory(immediates)
add_subdirectory(parsing)
add_subdirectory(framework)
add_subdirectory(resolution)
add_subdirectory(types)
add_subdirectory(uast)
add_subdirectory(util)

add_library(libdyno SHARED $<TARGET_OBJECTS:libdyno-obj>)
target_include_directories(libdyno PUBLIC
                           ${CHPL_MAIN_INCLUDE_DIR}
                           ${CHPL_INCLUDE_DIR})
target_link_libraries(libdyno PUBLIC ${CHPL_LLVM_LINK_ARGS})
# TODO: Get printchplenv output proper so that we don't need to SHELL here
target_compile_options(libdyno PUBLIC SHELL:$<$<COMPILE_LANGUAGE:CXX>:${CHPL_LLVM_COMP_ARGS}>)
find_package(Git QUIET)
execute_process(COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
                WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                OUTPUT_VARIABLE GIT_SHORT_HASH
                OUTPUT_STRIP_TRAILING_WHITESPACE)


# generate the git-version.cpp and compile it to produce the .o
add_custom_command(TARGET libdyno
                   PRE_LINK
                   COMMAND ${CMAKE_COMMAND} -E echo "namespace chpl { " > ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp
                   COMMAND ${CMAKE_COMMAND} -E echo_append "const char* GIT_SHA=\"" >> ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp
                   COMMAND ${CMAKE_COMMAND} -E echo_append ${GIT_SHORT_HASH} >> ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp
                   COMMAND ${CMAKE_COMMAND} -E echo "\"\;" >> ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp
                   COMMAND ${CMAKE_COMMAND} -E echo "}" >> ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp  # generate the file with git sha
                   COMMAND ${CMAKE_CXX_COMPILER} -c ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp -o ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o
                   BYPRODUCTS ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o
                   COMMENT "Generating git-version.cpp"
                   VERBATIM
                   COMMAND_EXPAND_LISTS) # really want this to result in a .o file, not the .cpp file- also, how to link it in now?

if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o)
  message(STATUS "Found compiled git-version.cpp.o!")
  # add_library(payload_object OBJECT IMPORTED GLOBAL)
  # set_target_properties(payload_object PROPERTIES IMPORTED_OBJECTS ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o)
  # target_sources(libdyno-obj PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o)
  target_link_libraries(libdyno PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/libdyno-obj.dir/util/git-version.cpp.o)
endif()