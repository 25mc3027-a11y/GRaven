#include "Renderer/Shader.h"

#include <glad/gl.h>

#include <fstream>
#include <sstream>
#include <iostream>

namespace GRaven
{

std::string Shader::ReadFile(const std::string& filepath) const
{
    std::ifstream file(filepath);

    if (!file.is_open())
    {
        std::cerr << "Failed to open shader file: "
                  << filepath << std::endl;

        return "";
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

unsigned int Shader::CompileShader(unsigned int type,
                                   const std::string& source) const
{
    GLuint shader = glCreateShader(type);

    const char* sourceCStr = source.c_str();

    glShaderSource(shader, 1, &sourceCStr, nullptr);

    glCompileShader(shader);

    GLint success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);

    if (!success)
    {
        char infoLog[1024];

        glGetShaderInfoLog(shader, 1024, nullptr, infoLog);

        std::cerr << "Shader compilation failed:\n"
                  << infoLog << std::endl;

        glDeleteShader(shader);

        return 0;
    }

    return shader;
}

unsigned int Shader::CreateProgram(unsigned int vertexShader,
                                   unsigned int fragmentShader) const
{
    GLuint program = glCreateProgram();

    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);

    glLinkProgram(program);

    GLint success;
    glGetProgramiv(program, GL_LINK_STATUS, &success);

    if (!success)
    {
        char infoLog[1024];

        glGetProgramInfoLog(program, 1024, nullptr, infoLog);

        std::cerr << "Shader program linking failed:\n"
                  << infoLog << std::endl;

        glDeleteProgram(program);

        return 0;
    }

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    return program;
}

Shader::Shader(const std::string& vertexPath,
               const std::string& fragmentPath)
{
    std::string vertexSource = ReadFile(vertexPath);
    std::string fragmentSource = ReadFile(fragmentPath);

    GLuint vertexShader =
        CompileShader(GL_VERTEX_SHADER, vertexSource);

    GLuint fragmentShader =
        CompileShader(GL_FRAGMENT_SHADER, fragmentSource);

    m_RendererID =
        CreateProgram(vertexShader, fragmentShader);
}

Shader::~Shader()
{
    glDeleteProgram(m_RendererID);
}

void Shader::Bind() const
{
    glUseProgram(m_RendererID);
}

void Shader::Unbind() const
{
    glUseProgram(0);
}

}