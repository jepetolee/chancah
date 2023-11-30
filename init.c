#include "init.h"

void InitSDL(void) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("[ERROR] in InitSDL(): %s", SDL_GetError());
        exit(1);
    }

    app.window = SDL_CreateWindow("Dodge!", SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, 0);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    app.renderer = SDL_CreateRenderer(app.window, -1, SDL_RENDERER_ACCELERATED);
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

    return;
}

void InitTTF(void) {
    if (TTF_Init() < 0) {
        printf("[ERROR] in InitTTF(): %s", SDL_GetError());
        exit(1);
    }

    app.font = TTF_OpenFont("./ttf/LiberationSans-Regular.ttf", 20);

    return;
}

void QuitSDL(int flag) {
    Mix_FreeChunk(death_effect);
    Mix_FreeMusic(bgm);
    SDL_DestroyTexture(player[i].texture);
    SDL_FreeSurface(score_board.surface);
    SDL_DestroyTexture(game_over.texture);
    SDL_DestroyTexture(score_board.texture);
    
    SDL_DestroyRenderer(app.renderer);
    SDL_DestroyWindow(app.window);
    SDL_CloseAudio();

    QuitTTF();
    IMG_Quit();
    SDL_Quit();
    exit(flag);

    return;
}

void QuitTTF(void) {
    TTF_CloseFont(app.font);
    TTF_Quit();

    return;
}

void InitMemorySet(void) {
    memset(&app, 0, sizeof(App));
    memset(&game_over, 0, sizeof(Entity));
    memset(&player, 0, sizeof(Entity));
    memset(&score_board, 0, sizeof(Text));

    return;
}

void InitScoreBoard(void) {
    score = 0;
    /* Black */
    score_board.color.r = 0;
    score_board.color.g = 0;
    score_board.color.b = 0;
    score_board.color.a = 255;

    score_board.pos.x = 420;
    score_board.pos.y = 40;

    return;
}

void InitPlayer1(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/12.png");
    player.pos.x = SCREEN_WIDTH / 2;
    player.pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
void InitPlayer2(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/14.png");
    player.pos.x = SCREEN_WIDTH / 2;
    player.pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
void InitPlayer3(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/13.png");
    player.pos.x = SCREEN_WIDTH / 2;
    player.pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
void InitLgoalnet(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/21.png");
    LGoalnet.pos.x=5;
    LGoalnet.pos.y=480;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
void InitRgoalnet(void) {
    player.texture = IMG_LoadTexture(app.renderer, "./gfx/20.png");
    RGoalnet.pos.x=595;
    RGoalnet.pos.y=480;
    SDL_QueryTexture(player.texture, NULL, NULL, &(player.pos.w),
                     &(player.pos.h));

    return;
}
void InitBall(void){
     game_over.texture = IMG_LoadTexture(app.renderer, "./gfx/football.png");
    SDL_QueryTexture(game_over.texture, NULL, NULL, &(game_over.pos.w),
                     &(game_over.pos.h));
    BALL.pos.x = 320;
    BALL.pos.y = 70;
}
