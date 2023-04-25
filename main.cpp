#include "includes/Engine.hpp"

int main2(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("SDL2 Window", 100, 100, 1024, 768, SDL_WINDOW_SHOWN);
    SDL_Delay(1000);
    return 0;
}


#ifdef _WIN32
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
#else
int main(int argc, char* argv[]) {
#endif
    main2(0, NULL);
    return 0;
}
