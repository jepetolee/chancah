#ifndef MAIN_H
#define MAIN_H

#include "defs.h"
#include "init.h"
#include "input.h"

/*사용하는 전역 변수*/
/// @ingroup GlobalVariables
App app;                        /**< 프로그램 전체 단위로 관리하는 전역 객체 모음 */
/// @ingroup GlobalVariables
Entity player[3];                  /**< 주인공의 속성을 설명하는 Entity형 구조체*/
/// @ingroup GlobalVariables
Entity BALL;               ;     /**< 공의 속성을 설명하는 Entity형 구조체*/
/// @ingroup GlobalVariables
Entity field;
Entity LGoalnet;
Entity RGoalnet;   
Item items[2];        /**< 게임오버 화면의 속성을 설명하는 Entity형 구조체*/


#endif