#pragma once

struct GLFWwindow;

namespace GRaven
{

class Window
{
public:
    Window();
    ~Window();
    bool ShouldClose() const;
    void PollEvents();
    void SwapBuffers();
private:
    GLFWwindow* m_Window;
};

}