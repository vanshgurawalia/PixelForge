#include "Engine/Window.h"
#include <SDL.h>
#include <iostream>

int main(int argc, char* argv[])
{
    try {
        Engine::Window window("PixelForge Engine", 1280, 720);
        while (window.isOpen()) {
    window.pollEvents();

    // Start frame
    window.clear();

    // --- Simple test draw ---
    SDL_SetRenderDrawColor(window.getRenderer(), 255, 0, 0, 255); // red
    SDL_Rect rect = {100, 100, 200, 150};
    SDL_RenderFillRect(window.getRenderer(), &rect);

    // --- Present ---
    SDL_RenderPresent(window.getRenderer());
}
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
