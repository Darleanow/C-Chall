#include <SDL2/SDL.h>
#include <stdbool.h>
#include <math.h>

float pythagore(float A, float B)
{
    return sqrt(pow(A, 2) + pow(B, 2));
}

int main(int argc, char **argv)
{
    // Init SDL with the flags we need
    if (0 != SDL_Init(SDL_INIT_VIDEO))
    {
        // SDL FAILED
        return EXIT_FAILURE;
    }

    // Create a window and a renderer
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    window = SDL_CreateWindow("Pythagorean solve", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_SHOWN);

    // If window creation failed, exit
    if (NULL == window)
    {
        SDL_Quit();
        return EXIT_FAILURE;
    }

    // If renderer creation failed, exit
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (NULL == renderer)
    {
        SDL_DestroyWindow(window);
        SDL_Quit();
        return EXIT_FAILURE;
    }

    if (0 != SDL_RenderClear(renderer))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }

    float a, b;
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);

    float c = pythagore(a, b);


    printf("C calculated is: %.2f\n", c);

    if (c > 0)
    {
        // Calculate the center of the window
        int centerX = 1280 / 2;
        int centerY = 720 / 2;

        // Calculate the positions of the triangle vertices relative to the center
        int x1 = centerX;
        int y1 = centerY;
        int x2 = centerX + (int)a;
        int y2 = centerY - (int)b;
        int x3 = centerX + (int)a;
        int y3 = centerY;

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderDrawLine(renderer, x2, y2, x3, y3);

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderDrawLine(renderer, x1, y1, x2, y2);

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_RenderDrawLine(renderer, x3, y3, x1, y1);
    }

    SDL_Event event;
    bool quit = false;

    while (!quit)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                // Ignore the SDL_QUIT event to prevent the window from closing
                continue;
            }
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
            {
                quit = true; // Exit the loop when the Escape key is pressed
            }
        }

        SDL_RenderPresent(renderer);
    }

    // END OF PROGRAM and CLEANUP
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}