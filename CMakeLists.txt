cmake_minimum_required(VERSION 3.31)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(jour2/job1)

add_executable(runtrack_cpp
        jour2/job1/Aquatique.cpp
        jour2/job1/Aquatique.hpp
        jour2/job2/main.cpp
        jour2/job2/Pingouin.cpp
        jour2/job2/Pingouin.hpp
        jour2/job1/Terrestre.cpp
        jour2/job1/Terrestre.hpp
)
