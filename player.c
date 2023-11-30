#include "player.h"
void player1speed(void){
    player[0].v_x*=1.2;
    player[0].v_y*=1.2;
}

void player2size(void){
    
}

void player3time(void){
    
}
//논의 할것. [i]가 필요할까에 관해서
void ActPlayer(void) {
    if (app.key_up) {
        player.pos.y -= PLAYER_SPEED;
        if (CheckCollisionWall(&player)) {
            player.pos.y += PLAYER_SPEED;
        }
    }
    if (app.key_down) {
        player.pos.y += PLAYER_SPEED;
        if (CheckCollisionWall(&player)) {
            player.pos.y -= PLAYER_SPEED;
        }
    }
    if (app.key_left) {
        player.pos.x -= PLAYER_SPEED;
        if (CheckCollisionWall(&player)) {
            player.pos.x += PLAYER_SPEED;
        }
    }
    if (app.key_right) {
        player.pos.x += PLAYER_SPEED;
        if (CheckCollisionWall(&player)) {
            player.pos.x -= PLAYER_SPEED;
        }
    }

    return;
}
