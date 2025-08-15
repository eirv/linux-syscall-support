cmake_minimum_required(VERSION 3.10.0)

project("linux-syscall-support")

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE include)

add_library(${PROJECT_NAME}-legacy INTERFACE)
target_include_directories(${PROJECT_NAME}-legacy INTERFACE legacy)
