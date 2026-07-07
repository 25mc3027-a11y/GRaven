# G-Raven

**G-Raven** is a custom 3D game engine being built from scratch in **Modern C++** as a long-term engine and graphics programming project.

The goal is to explore and implement the foundations of real-time rendering, engine architecture, performance engineering, and GPU-driven rendering while building a polished technical portfolio project.

> **Current Status:** Early Development — Project Foundation

---

## Project Goals

G-Raven is being developed to gain practical experience with:

- Modern C++ and resource ownership
- Game engine architecture
- Real-time 3D graphics
- OpenGL and GLSL
- Renderer abstractions
- Scene and entity systems
- Asset management
- Profiling and performance optimization
- Compute shaders
- GPU-driven rendering

The objective is not to build a production-ready commercial engine, but to create a focused, technically strong engine whose architecture and performance decisions can be measured, documented, and explained.

---

## Current Progress

### Week 1 — Project Foundation

- [x] Created the initial project structure
- [x] Configured C++20
- [x] Created a CMake-based build system
- [x] Created the `GRavenEngine` library target
- [x] Created the `Sandbox` executable target
- [x] Linked the Sandbox against the engine library
- [x] Created the initial `Application` interface
- [x] Successfully called engine code from the Sandbox
- [ ] Initialize Git repository
- [ ] Create first project milestone commit

Current program output:

```text
G-Raven Engine initialized!
G-Raven Engine is running!
```

---

## Current Architecture

```text
Sandbox/main.cpp
        |
        | includes
        v
Application.h
        |
        | implemented by
        v
Application.cpp
        |
        | compiled into
        v
GRavenEngine Library
        |
        | linked into
        v
Sandbox Executable
```

Current build targets:

```text
GRavenEngine  ->  Engine Library
Sandbox       ->  Executable linked with GRavenEngine
```

---

## Project Structure

```text
AmanEngine/
├── Assets/
├── Docs/
├── Engine/
│   ├── Core/
│   │   ├── Application.h
│   │   └── Application.cpp
│   ├── Events/
│   ├── Renderer/
│   └── Scene/
├── Sandbox/
│   └── main.cpp
├── Vendor/
├── CMakeLists.txt
├── .gitignore
└── README.md
```

---

## Technology Stack

### Currently Used

- C++20
- CMake
- MSVC
- Git
- GitHub

### Planned

- GLFW
- GLAD
- OpenGL 4.5/4.6
- GLSL
- GLM
- stb_image
- spdlog
- Dear ImGui
- ImGuizmo
- Assimp
- glTF
- YAML / yaml-cpp
- Tracy Profiler
- RenderDoc
- Compute Shaders
- GPU-Driven Rendering

---

## Build Instructions

### 1. Configure the Project

```powershell
cd C:\AmanEngine
cmake -S . -B build
```

### 2. Build the Debug Version

```powershell
cd C:\AmanEngine
cmake --build build --config Debug
```

### 3. Run the Sandbox

```powershell
cd C:\AmanEngine
.\build\Debug\Sandbox.exe
```

Expected output:

```text
G-Raven Engine initialized!
G-Raven Engine is running!
```

---

## Development Roadmap

```text
Modern C++ + CMake
        |
        v
Engine Library + Sandbox
        |
        v
OpenGL Rendering Foundation
        |
        v
3D Scene + Camera
        |
        v
Renderer Abstractions
        |
        v
Lighting + Shadows + HDR + PBR
        |
        v
Engine Core + Input + Events
        |
        v
Editor + ECS + Scene System
        |
        v
Asset Pipeline
        |
        v
Profiling + Optimization
        |
        v
Compute Shaders
        |
        v
GPU Culling + Indirect Rendering
```

---

## Development Philosophy

G-Raven follows a simple engineering loop:

**Build → Measure → Understand → Optimize → Demonstrate**

Every major system should be:

- Visible
- Measurable
- Documented
- Explainable

---

## Author

**Aman Jha**

B.Tech — Mathematics and Computing

Building projects in:

- Game Development
- Real-Time Graphics
- Engine Programming
- Modern C++

---

## License

A license has not been selected yet.