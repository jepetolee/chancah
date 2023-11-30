#include "input.h"

void GetInput(void) {
    SDL_Event event;

    /*SDL_PollEvent() 함수는 이벤트 큐에 남아 있는 이벤트를 가져옴*/
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            /*창닫기 버튼을 누른 경우*/
            case SDL_QUIT:
                QuitSDL(0);
                break;
            /*키보드 버튼을 뗐을 경우*/
            case SDL_KEYUP:
                ResponseKeyUp(&event.key);
                break;
            /*키보드 버튼을 눌렀을 경우*/
            case SDL_KEYDOWN:
                ResponseKeyDown(&event.key);
                break;
            default:
                break;
        }
    }

    return;
}

void ResponseKeyUp(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_UP:
                app.key_up = 0;
                break;
            case SDL_SCANCODE_DOWN:
                app.key_down = 0;
                break;
            case SDL_SCANCODE_LEFT:
                app.key_left = 0;
                break;
            case SDL_SCANCODE_RIGHT:
                app.key_right = 0;
                break;
            case SDL_SCANCODE_R:
                app.key_r = 0;
                break;
        }
    }

    return;
}

void ResponseKeyDown(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_UP:
                app.key_up = 1;
                break;
            case SDL_SCANCODE_DOWN:
                app.key_down = 1;
                break;
            case SDL_SCANCODE_LEFT:
                app.key_left = 1;
                break;
            case SDL_SCANCODE_RIGHT:
                app.key_right = 1;
                break;
            case SDL_SCANCODE_R:
                app.key_r = 1;
                break;
        }
    }

    return;
}