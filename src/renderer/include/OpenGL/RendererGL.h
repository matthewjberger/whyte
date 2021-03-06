#pragma once

#include <internal/Renderer.h>
#include <SDL.h>

namespace whyre
{
    class WHYRE_API RendererGL : public Renderer
    {
    public:
        void initialize_window() override;
        void clear_screen(float r, float g, float b, float a) override;
        void finalize() override;
        void tick() override;
    private:
        SDL_Window* window_ = nullptr;
        SDL_GLContext context_ = nullptr;
    };
}
