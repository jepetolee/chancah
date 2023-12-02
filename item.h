#ifndef ACTION_H
#define ACTION_H

#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#include <stdlib.h>
#include <time.h>
#include "init.h"
#include "defs.h"
#include "utils.h"
#include "utils.c"
/* main.h에 정의된 전역 변수 사용 */
extern Entity player[BUFSIZE];
extern Entity BALL;
extern Entity field;
extern Entity LGoalnet;
extern Entity RGoalnet;
Item items[2]; 
void initializeItem();
int checkitemFunctionOne();
void itemFunctionOne(int i);
int checkitemFunctionTwo();
void itemFunctionTwo(int j);
int checkitemFunctionThree();
void itemFunctionThree(int k);
void initializeItem();
#endif
