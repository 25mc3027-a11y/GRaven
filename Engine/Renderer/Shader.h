#pragma once

#include <string>

namespace GRaven
{
    class Shader
    {
    public:
        Shader(const std::string& vertexPath,
               const std::string& fragmentPath);

        ~Shader();

        Shader(const Shader&) = delete;
        Shader& operator=(const Shader&) = delete;

        Shader(Shader&&) = delete;
        Shader& operator=(Shader&&) = delete;

        void Bind() const;
        void Unbind() const;

    private:
        std::string ReadFile(const std::string& filepath) const;

        unsigned int CompileShader(unsigned int type,
                                   const std::string& source) const;

        unsigned int CreateProgram(unsigned int vertexShader,
                                   unsigned int fragmentShader) const;

    private:
        unsigned int m_RendererID = 0;
    };
}