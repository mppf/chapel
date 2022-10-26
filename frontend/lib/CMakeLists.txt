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

# use this function to generate a git-version.cpp file if one doesn't exist
# exist during the cmake configure step. If one exists, don't overwrite it,
# since that will force re-linking. Instead, we will wait for
# libdyno to pre-link, and then re-generate and compile the file at that time.
function(write_git_sha)
  if (NOT EXISTS ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp)
    execute_process(COMMAND ${CMAKE_SOURCE_DIR}/util/config/write-git-sha ${CMAKE_CURRENT_BINARY_DIR}/util)
    message(STATUS "wrote git-version.cpp")
  endif()
endfunction()
write_git_sha()
# target_sources(libdyno-obj PUBLIC git-sha-obj)
add_library(git-sha-obj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp)

# TODO: I tried adding the git-sha-obj here but it didn't end up working for libdyno
# that way - why not?
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

add_library(libdyno SHARED $<TARGET_OBJECTS:libdyno-obj> $<TARGET_OBJECTS:git-sha-obj>)

target_include_directories(libdyno PUBLIC
                           ${CHPL_MAIN_INCLUDE_DIR}
                           ${CHPL_INCLUDE_DIR})

target_link_libraries(libdyno PUBLIC ${CHPL_LLVM_LINK_ARGS})
# TODO: Get printchplenv output proper so that we don't need to SHELL here
target_compile_options(libdyno PUBLIC SHELL:$<$<COMPILE_LANGUAGE:CXX>:${CHPL_LLVM_COMP_ARGS}>)

# generate the git-version.cpp and compile it to produce the .o before linking libdyno
add_custom_command(TARGET libdyno
                   PRE_LINK
                   COMMAND ${CMAKE_SOURCE_DIR}/util/config/write-git-sha ${CMAKE_CURRENT_BINARY_DIR}/util # generate the file with git sha
                   COMMAND ${CMAKE_CXX_COMPILER} -c ${CMAKE_CURRENT_BINARY_DIR}/util/git-version.cpp -o ${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/git-sha-obj.dir/util/git-version.cpp.o
                   COMMENT "Generating git-version.cpp"
                   VERBATIM
                   ) # results in a .o file

message(STATUS "current-binary-directory = ${CMAKE_CURRENT_BINARY_DIR}/util")
