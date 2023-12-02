#include "action.h"

void ActGame(int i) {
    ActPlayer(i);
    if(checkitemFunctionThree()>2) ActCheckgoal();
    gravity(i);//플레이어와 공에 작용하는 중력
    Act();//충돌함수
    itemtotal();

    return;
}

void ActGameOver(void) {
    ActFinalScoreBoard();
    ActGameOverScreen();

    return;
}
int ActCheckgoal(void){
    int Goal=0;
    int score =0;
    if(((BALL.pos.x<LGoalnet.pos.x+LGoalnet.pos.w) &&(BALL.pos.y<LGoalnet.pos.y && BALL.pos.y>LGoalnet.pos.y-LGoalnet.pos.h)) ||((BALL.pos.x>RGoalnet.pos.x-RGoalnet.pos.w)&&(BALL.pos.y<RGoalnet.pos.y && BALL.pos.y>RGoalnet.pos.y-RGoalnet.pos.h))){
        score++;
        return Goal;
    }

}

void ActPlayer(int i) {
    if(i==2||i==1){
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
    if(i==0){
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
