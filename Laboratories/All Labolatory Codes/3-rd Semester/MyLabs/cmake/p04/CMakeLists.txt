cmake_minimum_required (VERSION 2.6)

project (Tutorial CXX)

add_executable(Tutorial main.cpp)

set(CMAKE_BUILD_TYPE Release)

set(LIBSRC lib.h lib.cpp)
add_library(libtest ${LIBSRC})

target_link_libraries(Tutorial libtest)

#set_target_properties(Tutorial PROPERTIES COMPILE_FLAGS "-DLIB_TEST")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -DLIB_TEST")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -DLIB_TEST")


install(TARGETS Tutorial DESTINATION bin)


enable_testing()

add_test(TestName1 Tutorial)
add_test(TestName2 Tutorial "test1" )
add_test(TestName3 Tutorial "test1" "test2")
