#include "init.h"





void InitMemorySet(void) {
    memset(&app, 0, sizeof(App));
    memset(&game_over, 0, sizeof(Entity));
    memset(&player, 0, BUFSIZE*sizeof(Entity));
    memset(&BALL, 0, sizeof(Entity));
    memset(&field, 0, sizeof(Entity));
    memset(&LGoalnet, 0, sizeof(Entity));
    memset(&RGoalnet, 0, sizeof(Entity));
    memset(&score_board, 0, sizeof(Text));
    memset(&BALL, 0, 2*sizeof(Item));   
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
    player[0].texture = IMG_LoadTexture(app.renderer, "./gfx/12_1.png");
    player[0].pos.x = SCREEN_WIDTH / 2;
    player[0].pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;
}
void InitPlayer2(void) {
    player[1].texture = IMG_LoadTexture(app.renderer, "./gfx/14_1.png");
    player[1].pos.x = SCREEN_WIDTH / 2;
    player[1].pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player[1].texture, NULL, NULL, &(player[1].pos.w),
                     &(player[1].pos.h));

    return;
}
void InitPlayer3(void) {
    player[2].texture = IMG_LoadTexture(app.renderer, "./gfx/13_1.png");
    player[2].pos.x = SCREEN_WIDTH / 2;
    player[2].pos.y = SCREEN_HEIGHT / 2;
    SDL_QueryTexture(player[2].texture, NULL, NULL, &(player[2].pos.w),
                     &(player[2].pos.h));

    return;
}
void InitLgoalnet(void) {
    LGoalnet.texture = IMG_LoadTexture(app.renderer, "./gfx/21.png");
    LGoalnet.pos.x=5;
    LGoalnet.pos.y=480;
    SDL_QueryTexture(LGoalnet.texture, NULL, NULL, &(LGoalnet.pos.w),
                     &(LGoalnet.pos.h));

    return;
}
void InitRgoalnet(void) {
    RGoalnet.texture = IMG_LoadTexture(app.renderer, "./gfx/20.png");
    RGoalnet.pos.x=595;
    RGoalnet.pos.y=480;
    SDL_QueryTexture(RGoalnet.texture, NULL, NULL, &(RGoalnet.pos.w),
                     &(RGoalnet.pos.h));

    return;
}
void InitBall(void){
     game_over.texture = IMG_LoadTexture(app.renderer, "./gfx/football.png");
    SDL_QueryTexture(game_over.texture, NULL, NULL, &(game_over.pos.w),
                     &(game_over.pos.h));
    BALL.pos.x = 320;
    BALL.pos.y = 70;
}
void InitGameOver(void) {
    game_over.texture = IMG_LoadTexture(app.renderer, "./gfx/pic30.png");
    SDL_QueryTexture(game_over.texture, NULL, NULL, &(game_over.pos.w),
                     &(game_over.pos.h));
    game_over.pos.x = 0;
    game_over.pos.y = 0;
}
