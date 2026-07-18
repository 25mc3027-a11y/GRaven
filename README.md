# G-Raven Engine

> A modern C++ game engine built from scratch to understand graphics programming, rendering architecture, and engine development.

![Status](https://img.shields.io/badge/Status-In%20Development-orange)
![Language](https://img.shields.io/badge/C%2B%2B-20-blue)
![Graphics](https://img.shields.io/badge/OpenGL-4.6-green)
![Build](https://img.shields.io/badge/CMake-3.20+-red)

---

## Overview

G-Raven is a custom game engine written from scratch in **Modern C++** using **OpenGL**.

The goal of this project is not to compete with existing engines, but to deeply understand how modern rendering engines work internally by building every major system from the ground up.

Instead of treating graphics APIs as a black box, G-Raven focuses on learning the complete rendering pipeline—from creating an OpenGL context to rendering complex 3D scenes.

---

## Current Progress

### Core

- ✅ Window Creation (GLFW)
- ✅ OpenGL Context
- ✅ GLAD Integration
- ✅ Render Loop
- ✅ Event Polling

### Renderer

- ✅ Vertex Buffer
- ✅ Vertex Array
- ✅ Shader System
- ✅ GLSL Compilation
- ✅ Shader Linking
- ✅ First Triangle Rendering

---

## Roadmap

### Phase 1 — Rendering Foundation

- [x] Window System
- [x] OpenGL Context
- [x] Vertex Buffers
- [x] Vertex Arrays
- [x] Shader System
- [x] First Triangle

### Phase 2 — Rendering Architecture

- [ ] Vertex Buffer Layout
- [ ] Renderer Abstraction
- [ ] Render Commands
- [ ] Index Buffers
- [ ] Uniform Buffers

### Phase 3 — Camera & Transformations

- [ ] Orthographic Camera
- [ ] Perspective Camera
- [ ] MVP Matrices
- [ ] Scene Transformations

### Phase 4 — Assets

- [ ] Texture Loading
- [ ] Material System
- [ ] Model Loading (Assimp)

### Phase 5 — Engine Systems

- [ ] ECS
- [ ] Scene Graph
- [ ] Input System
- [ ] Resource Manager

### Phase 6 — Advanced Rendering

- [ ] Lighting
- [ ] Shadow Mapping
- [ ] HDR
- [ ] Deferred Rendering
- [ ] Physically Based Rendering (PBR)

---

## Project Structure

```
G-Raven
│
├── Assets
│   └── Shaders
│
├── Engine
│   ├── Core
│   ├── Renderer
│   ├── Events
│   └── Scene
│
├── Sandbox
├── ThirdParty
└── Vendor
```

---

## Technologies Used

- Modern C++20
- OpenGL 4.6
- GLFW
- GLAD
- CMake

---

## Build

```bash
git clone https://github.com/<your-username>/GRaven.git

cd GRaven

cmake -S . -B build

cmake --build build --config Debug
```

Run:

```bash
build/Debug/Sandbox.exe
```

---

## Why I'm Building This

I'm building G-Raven as a long-term learning project to better understand:

- Rendering Pipelines
- Graphics Programming
- GPU Programming
- Engine Architecture
- Modern C++
- Real-Time Rendering

Every feature is implemented from scratch with a focus on understanding the underlying systems rather than simply using existing engine functionality.

---

## Devlogs

I document the development of G-Raven as I build it.

Current Milestones:

- 🚀 DevLog #1 — First Triangle

Future DevLogs will cover:

- Renderer Architecture
- Cameras
- Texture System
- Model Loading
- ECS
- PBR Rendering
- and much more...

---

## Inspiration

Some of the engines and projects that inspire G-Raven:

- Unreal Engine
- Hazel Engine
- id Tech
- Frostbite
- bgfx
