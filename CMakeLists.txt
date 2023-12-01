cmake_minimum_required(VERSION 3.26)
project(Contacts)

set(CMAKE_CXX_STANDARD 17)

add_executable(Contacts main.cpp
        Adress.h
        Tel_Numbers.h
        Birth_Date.h
        Contact.h
        Name.h)
