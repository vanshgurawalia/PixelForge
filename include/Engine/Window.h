#pragma once
#include <SDL.h>
#include <string>

namespace Engine {
    class Window {
    public:
        Window(const std::string& title, int width, int height);
        ~Window();

        void pollEvents();
        void clear();
        void present(); // 👈 add this

        bool isOpen() const { return m_isOpen; }
        SDL_Renderer* getRenderer() const { return m_renderer; } // 👈 fixed this

    private:
        SDL_Window* m_window = nullptr;
        SDL_Renderer* m_renderer = nullptr;
        bool m_isOpen = true;
    };
}
