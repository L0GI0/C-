cmake_minimum_required (VERSION 2.6)

project (Tutorial CXX)

add_executable(Tutorial main.cpp)

set(LIBSRC lib.h lib.cpp)
add_library(test ${LIBSRC})

target_link_libraries(Tutorial test)

set_target_properties(Tutorial PROPERTIES COMPILE_FLAGS "-DLIB_TEST")

install(TARGETS Tutorial DESTINATION bin)