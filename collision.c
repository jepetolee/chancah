#include "collision.h"

void elasticCollision2D(Entity *object1, Entity *object2) {

    // 상대 속도 계산
    Entity relative_velocity;
    relative_velocity.pos.x = object2->v_x - object1->v_x;
    relative_velocity.pos.y = object2->v_y - object1->v_y;

    // 충돌 각도 및 코사인, 사인 계산
    float collision_angle = atan2(relative_velocity.v_y, relative_velocity.v_x);
    float cos_collision_angle = cos(collision_angle);
    float sin_collision_angle = sin(collision_angle);

    // 탄성 충돌 공식을 사용하여 최종 속도 계산
    float v1_final_x = ((object1->mass - object2->mass) * object1->v_x + 2 * object2->mass * object2->v_x) / (object1->mass + object2->mass);
    float v1_final_y = ((object1->mass - object2->mass) * object1->v_y + 2 * object2->mass * object2->v_y) / (object1->mass + object2->mass);

    float v2_final_x = ((object2->mass - object1->mass) * object2->v_x + 2 * object1->mass * object1->v_x) / (object1->mass + object2->mass);
    float v2_final_y = ((object2->mass - object1->mass) * object2->v_y + 2 * object1->mass * object1->v_y) / (object1->mass + object2->mass);
    // 최종 속도 설정
    object1->v_x = v1_final_x;
    object1->v_y = v1_final_y;

    object2->v_x = v2_final_x;
    object2->v_y = v2_final_y;
}


void Act(void) {
    /*공이 골대 위에 위치할때*/
    if((LGoalnet.pos.x<BALL.pos.x && BALL.pos.x<LGoalnet.pos.x+Goal_net_width) &&( BALL.pos.y <LGoalnet.pos.y-Goal_net_height
    && BALL.pos.y<RGoalnet.pos.y-Goal_net_height )&& (BALL.pos.x>RGoalnet.pos.x&&BALL.pos.x<RGoalnet.pos.x+Goal_net_width)){
        BALL.pos.x=320;
        BALL.pos.y=160;
    }
    /*공과 선수가 부딫혔을때*/
    for(int i=0;i<BUFSIZE;i++){
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