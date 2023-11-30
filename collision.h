#ifndef ACTION_H
#define ACTION_H

#include "init.h"
#include "defs.h"
#include "utils.h"
#include "main.h"

/* main.h에 정의된 전역 변수 사용 */
extern Entity player[3];
extern Entity BALL;
extern Entity field;
extern Entity LGoalnet;
extern Entity RGoalnet;


void Act(void);

void elasticCollision2D(Entity *object1, Entity *object2);


#endif