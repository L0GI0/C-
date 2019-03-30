project (${dir_name})
file (GLOB subdirectory_files ${dir_name} *.h *.cpp *.hxx *.cxx *.c)
add_library (${dir_name} STATIC ${subdirectory_files})
set_target_properties (${dir_name} PROPERTIES LINKER_LANGUAGE CXX)
