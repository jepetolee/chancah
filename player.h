#include <stdio.h>

#include "init.h"
#include "defs.h"
#include "utils.h"

void player1speed(void){
    player[0].v_x*=1.2;
    player[0].v_y*=1.2;
    
}

void player2size(void){
    
}

void player3time(void){
    
}
void ActPlayer(int i) {
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
        if (CheckCollisionWall(&player[i])) {
            player[i].pos.x -= PLAYER_SPEED;
        }
    }

    return;
}

