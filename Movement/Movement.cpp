#include <iostream>
#include <SDL.h>
#include "Ball.h"
#include "InitWin.h"
#include <ctime>

int main(int argc, char* args[])
{
    InitWin initwin(500, 500);
    Ball ball(3, Velocity(2, 5), 10, Dot(100, 100));
    ball.draw_ball(initwin.get_renderer());
    bool quit = false;
    while (!quit)
    {
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT) quit = true;
        }

    }
    return 0;
}
