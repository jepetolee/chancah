#include "action.h"

void ActGame(int i) {
    ActPlayer(i);
    ActCheckgoal();
    gravity(i);
    Act();
    itemtotal();

    return;
}

void ActGameOver(void) {
    ActFinalScoreBoard();
    ActGameOverScreen();

    return;
}
void ActCheckgoal(void){
    int score =0;
    if(((BALL.pos.x<LGoalnet.pos.x+LGoalnet.pos.w) &&(BALL.pos.y<LGoalnet.pos.y && BALL.pos.y>LGoalnet.pos.y-LGoalnet.pos.h)) ||((BALL.pos.x>RGoalnet.pos.x-RGoalnet.pos.w)&&(BALL.pos.y<RGoalnet.pos.y && BALL.pos.y>RGoalnet.pos.y-RGoalnet.pos.h))){
        score++;
    }
}

void ActPlayer(int i) {
    if(i==0||i==1){
    if (app.key_up) {
        player[i].pos.y -= PLAYER_SPEED;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.y += PLAYER_SPEED;
        }
    }
    if (app.key_down) {
        player[i].pos.y += PLAYER_SPEED;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.y -= PLAYER_SPEED;
        }
    }
    if (app.key_left) {
        player[i].pos.x -= PLAYER_SPEED;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.x += PLAYER_SPEED;
        }
    }
    if (app.key_right) {
        player[i].pos.x += PLAYER_SPEED;
        if (CheckCollisionWall(&player)) {
            player[i].pos.x -= PLAYER_SPEED;
        }
    }
    }

    return;
}
void ActPlayer(int i) {
    if(i==2){
    if (app.key_up) {
        player[i].pos.y -= PLAYER_SPEED2;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.y += PLAYER_SPEED2;
        }
    }
    if (app.key_down) {
        player[i].pos.y += PLAYER_SPEED2;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.y -= PLAYER_SPEED2;
        }
    }
    if (app.key_left) {
        player[i].pos.x -= PLAYER_SPEED2;
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.x += PLAYER_SPEED2;
        }
    }
    if (app.key_right) {
        player[i].pos.x += PLAYER_SPEED2;
        if (CheckCollisionWall(&player)) {
            player[i].pos.x -= PLAYER_SPEED2;
        }
    }
    }

    return;
}






void ActGameOverScreen(void) {
    if (app.key_r) {
        InitPlayer1();
        InitPlayer2();
        InitPlayer3();
        InitLgoalnet();
        InitGameOver();
        InitRgoalnet();
        InitBall();
    }

    return;
}
