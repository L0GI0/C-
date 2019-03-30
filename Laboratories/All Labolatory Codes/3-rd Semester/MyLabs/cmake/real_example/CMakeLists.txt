cmake_minimum_required (VERSION 2.8)
project (ggssLibs)

#flagi
set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/CMakeFiles) #for .cmake files
set (PROJECT_INCLUDE_DIRECTORY ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_LINK_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
if(UNIX)
    set (CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wno-reorder")
endif()

set (GGSS_SCRIPTS_PATH ${CMAKE_SOURCE_DIR}/scripts)

include(FindLibraries) # boost, gsl, caen
include(CheckPlatform) # sets WINDOWS or LINUX flag
include(ParseDirectory) # parse_directory

set(PROJECTS
        logLib
        xmlLib
        utilsLib
        handleLib
        ThreadLib
        fifoLib
        FitLib
        OrtecMcbLib
        CaenHVLib
        ggssLib
        usbrmLib
		CaenN1470Lib
        mcaLib
        daemonLib
        )
	
include_directories ( ${CMAKE_SOURCE_DIR} ${PROJECT_INCLUDE_DIRECTORY})

foreach (singleproject ${PROJECTS})
        parse_directory(${singleproject})
endforeach(singleproject)

# executables
add_subdirectory (_ggss)
add_subdirectory (_dimCS)
add_subdirectory (_ggsspector)

install(FILES ${GGSS_SCRIPTS_PATH}/dimhw.sh DESTINATION bin)
install(DIRECTORY ${GGSS_SCRIPTS_PATH}/watchdog/ DESTINATION bin)
install(DIRECTORY ${GGSS_SCRIPTS_PATH}/python/ DESTINATION bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/misc/python/ DESTINATION python)
if(NOT Boost_USE_STATIC_LIBS)
    install(FILES ${Boost_LIBRARIES} DESTINATION lib)
endif()
install(FILES ${CAENN957_LIBRARY} DESTINATION lib)
install(DIRECTORY DESTINATION res)
install(FILES ${CMAKE_SOURCE_DIR}/misc/config/atltrtggss_default.xml DESTINATION config)
install(FILES ${CMAKE_SOURCE_DIR}/misc/config/pcatltrt02.cronfile DESTINATION config)
include(ggss-bin)
