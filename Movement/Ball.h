#pragma once
#include <SDL.h>
#include "Elements.h"

class Ball
{
public:
	int get_m();
	Velocity get_v();
	int get_r();

	void draw_ball(SDL_Renderer* ren);
	Ball(int m, Velocity v, int r, Dot dot);

private:
	int m;
	Velocity v(0, 0);
	int r;
	Dot dot;
};