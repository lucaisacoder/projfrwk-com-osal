# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
project(osal)
include(${CMAKE_SOURCE_DIR}/../../tools/cmake/util/SetEnv.cmake)

include(${CMAKE_SOURCE_DIR}/../../tools/cmake/util/Print.cmake)

get_filename_component(SDK_SOURCE_DIR ${CMAKE_SOURCE_DIR}/../../ ABSOLUTE)

include(${SDK_SOURCE_DIR}/tools/cmake/util/InstallConfig.cmake)

# Set SOURCES variable
set(DIR_SRCS code/src)
foreach(item ${DIR_SRCS})
    file(GLOB SOURCES_C ${item}/*.c)
    file(GLOB SOURCES_CPP ${item}/*.cpp)
    set(SOURCES ${SOURCES} ${SOURCES_C} ${SOURCES_CPP})
endforeach()

# Set HEADERS variable
set(DIR_INC_INN code/inc)
set(DIR_INC_PUB code/inc_pub)
set(DIR_INCS ${DIR_INC_INN} ${DIR_INC_PUB})
foreach(item ${DIR_INCS})
    file(GLOB HEADERS_H ${item}/*.h)
    file(GLOB HEADERS_HPP ${item}/*.hpp)
    set(HEADERS ${HEADERS} ${HEADERS_H} ${HEADERS_HPP})
endforeach()

# Set UNIT_TEST 
set(DIR_SRCS unit_test/src code/src)
foreach(item ${DIR_SRCS})
    file(GLOB SOURCES_UT_C ${item}/*.c)
    file(GLOB SOURCES_UT_CPP ${item}/*.cpp)
    set(SOURCES_UT ${SOURCES_UT} ${SOURCES_UT_C} ${SOURCES_UT_CPP})
endforeach()

# Set HEADERS variable
set(DIR_INC_INN unit_test/inc code/inc code/inc_pub)
set(DIR_INC_PUB "")
set(DIR_INCS ${DIR_INC_INN} ${DIR_INC_PUB})
foreach(item ${DIR_INCS})
    file(GLOB HEADERS_UT_H ${item}/*.h)
    file(GLOB HEADERS_UT_HPP ${item}/*.hpp)
    set(HEADERS_UT ${HEADERS_UT} ${HEADERS_UT_H} ${HEADERS_UT_HPP})
endforeach()

#set(LIBRARY_TYPE SHARED)
set(LIBRARY_TYPE STATIC)
#set(CMAKE_BUILD_TYPE DEBUG)
#set(CMAKE_BUILD_TYPE UNIT_TEST)
#set(HEADERS ${HEADERS_UT})
#set(SOURCES ${SOURCES_UT})
include(${SDK_SOURCE_DIR}/tools/cmake/util/LibraryConfig.cmake)
#include(${SDK_SOURCE_DIR}/tools/cmake/util/BinConfig.cmake) #只编译lib，最后link时候再对应生成bin
include(${SDK_SOURCE_DIR}/tools/cmake/util/Kconfig.cmake) 