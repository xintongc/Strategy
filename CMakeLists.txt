cmake_minimum_required(VERSION 3.6)
project(Strategy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Strategy/AddStrategy.cpp
        Strategy/AddStrategy.h
        Strategy/Calculator.cpp
        Strategy/Calculator.h
        Strategy/main.cpp
        Strategy/MathStrategy.h
        Strategy/SubtractStrategy.cpp
        Strategy/SubtractStrategy.h)

add_executable(Strategy ${SOURCE_FILES})