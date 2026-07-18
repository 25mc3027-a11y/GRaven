#include "Window.h"
#include <GLFW/glfw3.h>
#include <iostream>

namespace GRaven
{

Window::Window()
{
    if (!glfwInit())
    {
        std::cout << "Failed to initialize GLFW!" << std::endl;
        return;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    m_Window = glfwCreateWindow(
        1280,
        720,
        "G-Raven",
        nullptr,
        nullptr
    );

    if (!m_Window)
    {
        std::cout << "Failed to create window!" << std::endl;
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(m_Window);

    std::cout << "Window created successfully!" << std::endl;
}


Window::~Window()
{
    if (m_Window)
    {
        glfwDestroyWindow(m_Window);
    }

    glfwTerminate();

    std::cout << "Window destroyed!" << std::endl;
}

bool Window::ShouldClose() const
{
    return glfwWindowShouldClose(m_Window);
}

void Window::PollEvents()
{
    glfwPollEvents();
}

void Window::SwapBuffers(){
    glfwSwapBuffers(m_Window);
}

}