#pragma once

#include "utils.h"
#include "gravity.h"
#include "action.h"
#include "item.h"
#include "utils.h"
#include "player.h"

void elasticCollision2D(Entity *object1, Entity *object2){

    Entity relative_velocity;
    relative_velocity.v_x = object2->v_x - object1->v_x;
    relative_velocity.v_y = object2->v_y - object1->v_y;


    float collision_angle = atan2(relative_velocity.v_y, relative_velocity.v_x)>0?atan2(relative_velocity.v_y, relative_velocity.v_x):-1*atan2(relative_velocity.v_y, relative_velocity.v_x);
    float cos_collision_angle = cos(collision_angle);
    float sin_collision_angle = sin(collision_angle);

    double e=0.5;
    double v1_final_x = object1->v_x + e * relative_velocity.v_x * cos(collision_angle);
    double v1_final_y = object1->v_y + e * relative_velocity.v_y * sin(collision_angle);
    double v2_final_x = object2->v_x - e * relative_velocity.v_x * cos(collision_angle);
    double v2_final_y = object2->v_y - e * relative_velocity.v_y * sin(collision_angle);

    object1->v_x = v1_final_x;
    object1->v_y = v1_final_y;

    object2->v_x = v2_final_x;
    object2->v_y = v2_final_y;
}
void Act(void) {
    /*공이 골대 위에 위치할때*/
    if((LGoalnet.pos.x<BALL.pos.x && BALL.pos.x<LGoalnet.pos.x+LGoalnet.pos.w) &&( BALL.pos.y ==LGoalnet.pos.y-LGoalnet.pos.h
    && BALL.pos.y == RGoalnet.pos.y-RGoalnet.pos.h )&& (BALL.pos.x>RGoalnet.pos.x&&BALL.pos.x<RGoalnet.pos.x+RGoalnet.pos.w)){
        BALL.pos.x=320;
        BALL.pos.y=160;
    }
    /*공과 선수가 부딫혔을때*/
    int i=0;
    for( i=0;i<BUFSIZE2;i++){
    if(CheckCollisionObjects(&BALL,&(player[i]))){
        elasticCollision2D(&BALL,&(player[i]));   
    }
    }
    /*공과 경기장이 부딫혔을때*/
    if((BALL.pos.x==0 && (BALL.pos.y>0 && BALL.pos.y<410)) ||((BALL.pos.x>0 && BALL.pos.x<640 ) && BALL.pos.y==0) 
    ||(BALL.pos.x==640 && (BALL.pos.y>0 && BALL.pos.y<410))){
        switch (CheckCollisionSide(&BALL)) {
                case LEFT_WALL: {
                    BALL.v_x *= -1;
                    break;
                }
                case RIGHT_WALL: {
                    BALL.v_x *= -1;
                    break;
                }
                case TOP_WALL: {
                    BALL.v_y *= -1;
                    break;
                }
                case BOTTOM_WALL: {
                    BALL.v_y *= -1;
                    break;
                }
                default:
                break;
    }
   }
}
