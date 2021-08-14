#include "Ball.h"

int Ball::get_m()
{
	return m;
}

int Ball::get_r()
{
	return r;
}

Velocity Ball::get_v()
{
	return v;
}

void Ball::draw_ball(SDL_Renderer* ren)
{
	SDL_SetRenderDrawColor(ren, 0, 0, 255, 255);
	for (int i = dot.x - r; i < dot.x + r + 1; ++i)
	{
		for (int j = dot.y - r; j < dot.y + r + 1; ++j)
		{
			if ((i - dot.x) * (i - dot.x) + (j - dot.y) * (j - dot.y) <= r * r)
			{
				SDL_RenderDrawPoint(ren, i, j);
			}
		}
	}
	SDL_RenderPresent(ren);
}

Ball::Ball(int m, Velocity v, int r, Dot dot)
{
	this->m = m;
	this->v = v;
	this->r = r;
	this->dot = dot;
}