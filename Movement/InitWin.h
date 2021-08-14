#pragma once
#include <SDL.h>

class InitWin
{
public:
    SDL_Renderer* get_renderer();
    SDL_Window* get_window();
    InitWin(int width, int height);
    ~InitWin();

private:
    SDL_Window* win;
    SDL_Renderer* ren;
    int width;
    int height;
};
