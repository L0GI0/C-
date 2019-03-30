cmake_minimum_required (VERSION 2.6)

project(Learning)

add_executable(Learning main.cpp)

set(SRC main.cpp)

add_library(LearningLib ${SRC})

target_link_libraries(Learning LearningLib)

set(CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall
-DLIB_TEST)

set(CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE} -O0 -Wall
-DLIB_TEST)

enable_testing()

add_test(LearningTest1 Learning)
add_test(LearningTest2 Learning)
add_test(LearningTest3 Learning)

