cmake_minimum_required(VERSION 3.8)
project(Cpp2_project1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(
        Cpp2_project1
        Database.h
        Database.cpp
        DonorList.h
        DonorList.cpp
        DonorType.h
        DonorType.cpp
        MemberType.cpp
        MemberType.h
        Main.cpp
        Interface.cpp
        Interface.h
        DonorListCopyFunctions.cpp)