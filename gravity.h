#pragma once
#include "init.h"
#include "defs.h"
#include "utils.h"
void gravity(int i);

void gravity(int i){
    BALL.v_y-=BALL.v_y-5;
    player[i].v_y=-5;
}
