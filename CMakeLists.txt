cmake_minimum_required(VERSION 3.25)
project(ACL)

set(CMAKE_CXX_STANDARD 17)

add_executable(ACL_test test.cpp acl.h doctest.h)
