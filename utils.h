#ifndef UTILS_H
#define UTILS_H

#include "defs.h"

/* main.h에 정의된 전역 변수 사용 */
extern App app;
extern Entity player[3];
extern Entity game_over;
extern Text score_board;
extern char score_text[BUFSIZE];
extern int score;
int CheckCollisionWall(Entity *object);
int CheckCollisionObjects(Entity *object_a, Entity *object_b);
int CheckCollisionSide(Entity *object);
int CheckCollisionObjects(Entity *object_a, Entity *object_b);
int CheckCollisionObject(Entity *object_a, Item *object_b)




#endif
