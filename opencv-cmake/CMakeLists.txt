cmake_minimum_required(VERSION 3.0)
project( project )

# C-CXX-standard
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS  "-g -fexec-charset=GBK")

# -------- Debug config --------
#dubug 模式------------------这个非常重要，否则无法进入断点
add_definitions("-Wall -g")
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")
# SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
# SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


# -------- source code --------

# 添加.h include || include_directories() = -I
include_directories("${PROJECT_SOURCE_DIR}/include")
# 添加.cpp src || link_directories() = -L
# set(CMAKE_CXX_FLAGS "-static ${CMAKE_CXX_FLAGS}")   #优先添加静态链接库
add_subdirectory("${PROJECT_SOURCE_DIR}/src")

# link_directories("${PROJECT_SOURCE_DIR}/src")

# -------- 3rd-part lib --------
# Opencv4
find_package( OpenCV 4 REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
link_directories(${OpenCV_LIB_DIRS})
message(STATUS "OpenCV status:")
message(STATUS "    Opencv version: ${OpenCV_VERSION}")   
message(STATUS "    Opencv include: ${OpenCV_INCLUDE_DIRS}")


option(WITH_LOG "Build with output logs and images in tmp" OFF)
if(WITH_LOG)
    add_definitions(-DLOG)
endif(WITH_LOG)


message("CMAKE_BINARY_DIR:" ${CMAKE_BINARY_DIR})


# 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) 
add_executable(${PROJECT_NAME} 
    main.cpp
    )
target_link_libraries(${PROJECT_NAME} 
    ${OpenCV_LIBS}
    src
    )

    