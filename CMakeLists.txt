cmake_minimum_required(VERSION 3.29)
project(cpp_playground)

set(CMAKE_CXX_STANDARD 14)

include_directories(knou)

add_executable(cpp_playground
    knou/exam1.cpp
        knou/exam2.cpp
        knou/exam3.cpp
        knou/exam4.cpp
)
