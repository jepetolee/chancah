#ifndef ACTION_H
#define ACTION_H

#include "init.h"
#include "defs.h"
#include "utils.h"
#include "gravity.h"
#include "main.h"
#include "collision.h"
#include "input.h"
#include "item.h"
#include "main.h"
#include "utils.h"
#include "player.h"
/* main.h에 정의된 전역 변수 사용 */
extern char score_text[BUFSIZE];
extern int score;
void ActGame(int i);
void ActGameOver(void) ;
void ActCheckgoal(void);
void ActPlayer(int i);
void ActScoreBoard(void);
void ActFinalScoreBoard(void);
void ActGameOverScreen(void);


#endif
