#https://stackoverflow.com/questions/21163188/most-simple-but-complete-cmake-example
#https://cmake.org/cmake/help/latest/index.html
cmake_minimum_required(VERSION 3.21)
project(cpp20-template)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#add_executable(cpp20-template src/main.cpp)

set(PROJ_NAME cpp20-template)
project(${PROJ_NAME} C CXX)

enable_testing()

#add files in this project
set(SRC_MAIN src)
file(GLOB_RECURSE SOURCES ${SRC_MAIN}/*.cpp)
list(REMOVE_ITEM SOURCES ${SRC_MAIN}/main.cpp)
file(GLOB_RECURSE HEADERS ${SRC_MAIN}/*.h)
add_library(${PROJ_NAME} STATIC ${SOURCES} ${HEADERS})

#add google
add_subdirectory(lib/googletest)
#add unit tests
add_subdirectory(tst)
