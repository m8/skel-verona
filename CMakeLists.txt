cmake_minimum_required(VERSION 3.8)
project(bench CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

set(VERONA_PATH "external/verona-rt")
set(VERONA_RT_ONLY_HEADER_LIBRARY true)

add_executable(bench bench.cpp)

add_subdirectory(${VERONA_PATH})

target_include_directories(bench 
    PUBLIC ${VERONA_PATH}/src/rt
)

target_link_libraries(bench 
    PUBLIC snmalloc
)

