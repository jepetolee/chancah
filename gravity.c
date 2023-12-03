#include "gravity.h"
void gravity(int i){
    BALL.v_y-=BALL.v_y-5;
    player[i].v_y=-5;
}
