#include "../includes/Engine.hpp"


Render::Render(std::string name, int width, int height)
{
    this->width = width;
    this->height = height;
    this->isRunning = false;
    this->window = NULL;
    this->renderer = NULL;

    SDL_Init(SDL_INIT_VIDEO);
    this->window = SDL_CreateWindow(name.c_str(), 100, 100, this->width, this->height, SDL_WINDOW_SHOWN);
    this->isRunning = true;
}


Render::~Render()
{
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    SDL_Quit();
}

void    Render::init()
{
    this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 255);
    SDL_RenderClear(this->renderer);
}

void    Render::draw()
{
    for (int i = 0; i < this->objects.size(); i++)
    {
        SDL_Rect rect;
        rect.x = this->objects[i].getPosition().x;
        rect.y = this->objects[i].getPosition().y;
        rect.w = this->objects[i].getWidth();
        rect.h = this->objects[i].getHeight();
        SDL_SetRenderDrawColor(this->renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(this->renderer, &rect);
    }
}