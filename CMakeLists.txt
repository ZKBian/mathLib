cmake_minimum_required(VERSION 3.12)
project(math)

include_directories(
    include
    "/home/bian/bianLib"
    # ${Boost_INCLUDE_DIR}
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -pthread")

add_executable(mathTest 
    test.cpp 
)