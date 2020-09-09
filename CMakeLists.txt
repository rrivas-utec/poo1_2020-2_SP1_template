cmake_minimum_required(VERSION 3.10.2)
project(SP1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(SP1
        main.cpp
        test_E1.cpp
        test_E2.cpp
        catch.hpp
        redirect_io.h
        SP1.h SP1.cpp)