#ifndef RENDER_HPP
# define RENDER_HPP

# include <SDL2/SDL.h>
# include <iostream>

class Render
{
    public:
        Render(std::string name, int width, int height);
        ~Render();
        void    init();
        void    draw();
        void    update();
        void    clean();
        void    run();
        bool    running() { return isRunning; }

    private:
        int     width;
        int     height;
        bool    isRunning;
        std::vector<Object> objects;        
        SDL_Window  *window;
        SDL_Renderer    *renderer;
};




#endif