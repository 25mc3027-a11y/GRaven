#include "Application.h"

#include <glad/gl.h>
#include <iostream>
#include <filesystem>

#include "Renderer/VertexBuffer.h"
#include "Renderer/VertexArray.h"
#include "Renderer/Shader.h"

namespace GRaven
{

Application::Application()
    : m_Window(std::make_unique<Window>())
{
    std::cout << "GRaven Engine Created!" << std::endl;
}

Application::~Application()
{
    std::cout << "G-Raven Engine shutting down!" << std::endl;
}

void Application::Run()
{
    if (!gladLoaderLoadGL())
    {
        std::cout << "Failed to initialise GLAD" << std::endl;
        return;
    }

    std::cout << "GLAD initialised successfully" << std::endl;

    std::cout << "Current Working Directory : "
              << std::filesystem::current_path()
              << std::endl;

    std::cout << "Vendor : "
              << reinterpret_cast<const char*>(glGetString(GL_VENDOR))
              << std::endl;

    std::cout << "Renderer : "
              << reinterpret_cast<const char*>(glGetString(GL_RENDERER))
              << std::endl;

    std::cout << "Version : "
              << reinterpret_cast<const char*>(glGetString(GL_VERSION))
              << std::endl;

    float vertices[] =
    {
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f
    };

    VertexBuffer vertexBuffer(vertices, sizeof(vertices));

    VertexArray vertexArray;
    vertexArray.Bind();
    vertexBuffer.Bind();

    glVertexAttribPointer(
        0,
        3,
        GL_FLOAT,
        GL_FALSE,
        3 * sizeof(float),
        (void*)0
    );

    glEnableVertexAttribArray(0);

    Shader shader(
        "Assets/Shaders/Triangle.vert",
        "Assets/Shaders/Triangle.frag"
    );

    while (!m_Window->ShouldClose())
    {
        m_Window->PollEvents();

        glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        shader.Bind();
        vertexArray.Bind();

        glDrawArrays(GL_TRIANGLES, 0, 3);

        m_Window->SwapBuffers();
    }
}

}