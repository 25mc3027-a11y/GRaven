cmake_minimum_required(VERSION 3.20)

project(GRaven)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(GRavenEngine)
target_sources(GRavenEngine
    PRIVATE
       Engine/Core/Application.cpp
       Engine/Core/Application.h
           )

target_include_directories(
    GRavenEngine
    PUBLIC
    Engine/Core
)
add_executable(Sandbox
    Sandbox/main.cpp
    )

target_link_libraries(Sandbox
    PRIVATE
        GRavenEngine
        )