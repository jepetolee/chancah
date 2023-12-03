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
void Initfield(void) {
    player[0].texture = IMG_LoadTexture(app.renderer, "./gfx/ch1.png");
    player[0].pos.x = 0;
    player[0].pos.y = 0;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;
}
void InitPlayer1(void) {
//플레이어1이 캐릭터1 골랐을때
    player[0].texture = IMG_LoadTexture(app.renderer, "./gfx/ch1.png");
    player[0].pos.x = 125;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;}
void InitPlayer1_1(void) {
//플레이어2가 캐릭터1 골랐을때
    player[0].texture = IMG_LoadTexture(app.renderer, "./gfx/ch1-1.png");
    player[0].pos.x = 515;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;}
void InitPlayer2(void) {
    player[1].texture = IMG_LoadTexture(app.renderer, "./gfx/ch2.png");
    player[0].pos.x = 125;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[1].texture, NULL, NULL, &(player[1].pos.w),
                     &(player[1].pos.h));

    return;
}
void InitPlayer2_1(void) {
    player[1].texture = IMG_LoadTexture(app.renderer, "./gfx/ch2-1.png");
    player[0].pos.x = 515;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[1].texture, NULL, NULL, &(player[1].pos.w),
                     &(player[1].pos.h));

    return;
}
void InitPlayer3(void) {
    player[2].texture = IMG_LoadTexture(app.renderer, "./gfx/ch3.png");
    player[0].pos.x = 125;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[2].texture, NULL, NULL, &(player[2].pos.w),
                     &(player[2].pos.h));

    return;
}
void InitPlayer3_1(void) {
    player[2].texture = IMG_LoadTexture(app.renderer, "./gfx/ch3-1.png");
    player[0].pos.x = 515;
    player[0].pos.y = 480;
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
    RGoalnet.pos.x=515;
    RGoalnet.pos.y=480;
    SDL_QueryTexture(RGoalnet.texture, NULL, NULL, &(RGoalnet.pos.w),
                     &(RGoalnet.pos.h));

    return;
}
void InitBall(void){
     game_over.texture = IMG_LoadTexture(app.renderer, "./gfx/BALL.png");
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
void initial_value(void){
BALL.pos.w = BALL_width;
BALL.pos.h=BALL_height;
LGoalnet.pos.w=Goal_net_width ;
LGoalnet.pos.h=Goal_net_height;
RGoalnet.pos.w=Goal_net_width ;
RGoalnet.pos.h=Goal_net_height;
player[0].pos.w=player1_width;
player[0].pos.h=player1_height;
player[1].pos.w=player2_width ;
player[1].pos.h=player2_height;
player[2].pos.w=player1_width;
player[2].pos.h=player1_height;
items[0].pos.w=ITEM_WIDTH;
items[0].pos.h=ITEM_HEIGHT;
items[1].pos.w=ITEM_WIDTH;
items[1].pos.h=ITEM_HEIGHT;
items[2].pos.w=ITEM_WIDTH;
items[2].pos.h=ITEM_HEIGHT;
}
