#boost
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_LIBS "$ENV{BOOST_USE_STATIC}")
if(Boost_USE_STATIC_LIBS)
	add_definitions (-DSTATIC_BOOST=TRUE)
endif()
set(BOOST_DIR "$ENV{BOOST}")
if(BOOST_DIR)
    message("ENV BOOST var found: " ${BOOST_DIR})
else()
    message("ENV BOOST var NOT found. Setting to /usr/local/")
    set(BOOST_DIR /usr/local)
endif()
if(WIN32)
	SET(BOOST_LIBRARYDIR "$ENV{BOOST_LIBDIR}")
endif()
SET(BOOST_ROOT ${BOOST_DIR})
SET(Boost_NO_SYSTEM_PATHS ON)

#set(Boost_INCLUDE_DIR /usr/local/include)
#set(Boost_LIBRARY_DIR /usr/local/lib)

set(Boost_REALPATH ON)
find_package (Boost 1.54 REQUIRED COMPONENTS system filesystem log log_setup thread timer date_time chrono program_options regex)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})
add_definitions(${Boost_DEFINITIONS})
#gsl
if(UNIX)
	find_package (GSL REQUIRED)
	include_directories(${GSL_INCLUDE_DIRS})
	link_directories(${GSL_LIBRARY_DIRS})
	add_definitions(${GSL_DEFINITIONS})
else()
	set(GSL_INCLUDE_DIRS "$ENV{GSL_INCDIR}")
	set(GSL_LIBRARY_DIRS "$ENV{GSL_LIBDIR}")
	include_directories(${GSL_INCLUDE_DIRS})
	message("GSL: " ${GSL_LIBRARY_DIRS})
	find_library(GSL NAMES gsl HINTS ${GSL_LIBRARY_DIRS})
	find_library(CBLAS NAMES cblas HINTS ${GSL_LIBRARY_DIRS})
	set(GSL_LIBRARIES "${GSL};${CBLAS}")
endif()

#CAENN957
find_library(CAENN957_LIBRARY NAMES CAENN957 N957lib N957 HINTS ${PROJECT_LINK_DIRECTORY})
message("CAEN N957:" ${CAENN957_LIBRARY})

#DIM
if(UNIX)
	find_library(DIM_LIBRARY NAMES libdim.a dim.a dim HINTS ${PROJECT_LINK_DIRECTORY}) #prefer static library
else()
	find_library(DIM_LIBRARY NAMES dim HINTS ${PROJECT_LINK_DIRECTORY}) #prefer static library
endif()
message("DIM:" "${DIM_LIBRARY}")
