cmake_minimum_required(VERSION 3.20)

project(GRaven)

add_subdirectory(ThirdParty/GLFW)
add_subdirectory(ThirdParty/GLAD)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(GRavenEngine)
target_sources(GRavenEngine
    PRIVATE
       Engine/Core/Application.cpp
       Engine/Core/Application.h
       Engine/Core/Window.cpp
       Engine/Core/Window.h

       Engine/Renderer/VertexBuffer.cpp
       Engine/Renderer/VertexBuffer.h
       Engine/Renderer/VertexArray.cpp
       Engine/Renderer/VertexArray.h
       Engine/Renderer/Shader.cpp
       Engine/Renderer/Shader.h
           )

target_include_directories(
    GRavenEngine
    PUBLIC
    Engine
)

target_link_libraries(
    GRavenEngine
    PUBLIC
       glfw
       GLAD
)
add_executable(Sandbox
    Sandbox/main.cpp
    )

target_link_libraries(Sandbox
    PRIVATE
        GRavenEngine
        )