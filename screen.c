#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <SDL2/SDL.h> 
 
#define WINDOW_WIDTH 640 
#define WINDOW_HEIGHT 480 
 
typedef struct {
     Uint8 r, g, b; 
} Color;
 
Color getRandomColor() { 
    Color color; 
    color.r = rand() % 256; 
    color.g = rand() % 256; 
    color.b = rand() % 256; 
    return color; 
}

enum ScreenState {
    INITIAL, // 처음 화면
    FOUR_RECTS, // 선택창
    NO_RECTS, // 게임화면
};

int main() {
    
    //SDL_Rect initialRect = { WINDOW_WIDTH / 4, WINDOW_HEIGHT / 4, WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2};
 
    if (SDL_Init(SDL_INIT_VIDEO) != 0) { 
        fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError()); 
        return 1; 
    } 
    
    SDL_Window* window = SDL_CreateWindow("Mouse Click Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN); 
    if (window == NULL) { 
        fprintf(stderr, "SDL_CreateWindow failed: %s\n", SDL_GetError()); 
        SDL_Quit(); 
        return 1; 
    } 
    
    srand(time(NULL)); 

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); 
    if (renderer == NULL) { 
        fprintf(stderr, "SDL_CreateRenderer failed: %s\n", SDL_GetError()); 
        SDL_DestroyWindow(window); 
        SDL_Quit(); 
        return 1; 
    } 
     
    Color backgroundColor = {255, 255, 255};

    enum ScreenState currentState = INITIAL;

    SDL_Event event; 
    int quit = 0; 
    Uint32 startTime = SDL_GetTicks();

    while (!quit) {  
        while (SDL_PollEvent(&event) != 0) { 
            if (event.type == SDL_QUIT) { 
                quit = 1; 
            } else if (event.type == SDL_MOUSEBUTTONDOWN) { 
                int mouseX = event.button.x;
                int mouseY = event.button.y;

                switch (currentState) {
                    case INITIAL:
                        
                        currentState = FOUR_RECTS;
                        break;
                    case FOUR_RECTS:
                        
                        currentState = NO_RECTS;
                        break;
                    case NO_RECTS:
                        
                        currentState = INITIAL;
                        break;
                } 
            } 
        } 
        // 화면 색 설정 
        SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, 255); 
        SDL_RenderClear(renderer);

        // 화면들
        //switch (currentState) {
            //case INITIAL:
                // 처음 화면
                SDL_Rect initialRect;
                initialRect.x = WINDOW_WIDTH / 4;
                initialRect.y = WINDOW_HEIGHT / 4;
                initialRect.w = WINDOW_WIDTH / 2;
                initialRect.h = WINDOW_HEIGHT / 2;
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderDrawRect(renderer, &initialRect);
                //break;
            //case FOUR_RECTS:
                // 선택창
                for (int i = 0;i<4;++i) {
                    SDL_Rect rect;
                    rect.x = 0;
                    rect.y = i* WINDOW_HEIGHT / 4;
                    rect.w = WINDOW_WIDTH;
                    rect.h = WINDOW_HEIGHT / 4;
                    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                    SDL_RenderDrawRect(renderer, &rect);
                }
                //break;
            //case NO_RECTS:
                // 게임 화면
                //break;
        //}
        SDL_RenderPresent(renderer);

        if(currentState == NO_RECTS && SDL_GetTicks() - startTime >= 12000) {
            quit = 1;
        }
    } 
    
    SDL_DestroyRenderer(renderer); 
    SDL_DestroyWindow(window); 
    SDL_Quit(); 

    return 0; 
}