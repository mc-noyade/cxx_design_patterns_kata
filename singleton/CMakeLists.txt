cmake_minimum_required(VERSION 3.16)

project(singleton_proj
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
find_package(GTest REQUIRED)
enable_testing()

set (GTEST_ROOT ${CMAKE_SOURCE_DIR}/../googletest)
add_subdirectory(${GTEST_ROOT} gtest_build)
add_subdirectory(${CMAKE_SOURCE_DIR}/tests)


add_library(singleton_thread SHARED
        src/threadsafe.cpp
        include/threadsafe.hpp
)

add_library(singleton_inheritance
        src/inheritance.cpp
        include/inheritance.hpp
        )

add_library(singleton_serialization
        src/serialization.cpp
        include/serialization.hpp
        )
