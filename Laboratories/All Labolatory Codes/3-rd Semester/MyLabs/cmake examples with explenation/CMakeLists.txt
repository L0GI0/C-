#Sets the compilation flags to report all waring and enable 
cmake_minimum_required(VERSION 2.6)

#debugging in the generated object files and executable

project(spacer_project)
set(CMAKE_CXX_FLAGS "-Wall -q")

#The following gile GLOB command will search for all files within 
#the current directory that match the specified expression and #assign the resulting files to the variable SRCS

file(GLOB SRC *.cpp *.h)

#Add a subdirectory to the project . The CmakeLists.txt file
#in that subdirecotry will be used for further setting up the 
#project 

add_subdirectory(src)

#Define the target application and the list of C soruce
#and header files need for the executable 
add_executable(spacer &{SRCS})
