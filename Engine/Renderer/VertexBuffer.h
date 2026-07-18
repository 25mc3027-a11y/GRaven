#pragma once

namespace GRaven
{
    class VertexBuffer
    {
        public:
            VertexBuffer(const void* vertices, unsigned int size);
            ~VertexBuffer();

            void Bind() const;
            void Unbind() const;

        private:
            unsigned int m_RendererID;
    };
}