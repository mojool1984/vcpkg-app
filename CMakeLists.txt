cmake_minimum_required(VERSION 3.10)

project(HelloWorld)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")

find_package(fmt CONFIG REQUIRED)
find_package(greet CONFIG REQUIRED)

add_executable(HelloWorld main.cpp)

set_target_properties(HelloWorld PROPERTIES
    MSVC_RUNTIME_LIBRARY 
    "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

target_link_libraries(HelloWorld PRIVATE fmt::fmt)
target_link_libraries(HelloWorld PRIVATE greet::greet)
