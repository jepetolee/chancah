#pragma once
#define UTILS_H

#include "defs.h"

/* main.h에 정의된 전역 변수 사용 */


/**
 @brief 주인공 혹은 총알이 벽 밖으로 넘어갔는지 확인

 Entity 객체가 벽 밖으로 넘어갔는지 판정한다.

 @param[in] object 탐지 대상 Entity형 구조체

 @return 벽 밖으로 넘어가면 1, 벽 안에 있으면 0
 @ingroup Utils
*/
//int CheckCollisionWall(Entity *collationObject);

/**
 @brief 주인공 혹은 총알이 어느 방향 벽과 충돌했는지 확인

 공이 튕기는 물리엔진을 구현하기 위해, Entity 객체가 어느 쪽 벽과 충돌했는지 확인한다.

 @param[in] object 탐지 대상 Entity형 구조체

 @return
       부딫힘이 없으면 0
       왼쪽 벽과 부딫히면 \ref LEFT_WALL
       오른쪽 벽과 부딫히면 \ref RIGHT_WALL
       위 벽과 부딫히면 \ref TOP_WALL
       아래 벽과 부딫히면 \ref BOTTOM_WALL
 @ingroup Utils
*/
//int CheckCollisionSide(Entity *collationObject);

/**
 @brief 두 Entity 간 충돌 여부를 판단

 두 Entity 간 충돌 여부를 판단한다. \ref Entity.pos 는 SDL2 라이브러리에서
 정의한 SDL_Rect 구조체이다. 이 구조체는 멤버 변수로 (x, y)좌표와 (w, h)
 너비/높이 쌍을 가진다. (x, y)는 초기화 과정 또는 \ref Action 모듈에서 루프마다
 계산되며 (w, h)는 \ref Draw 모듈에서 텍스쳐 정보를 바탕으로 계산된다. SDL2에서
 제공하는 SDL_HasIntersection 함수를 이용하여 두 개의 SDL_Rect 구조체에 교집합이
 있는지 판별하는 방법으로 충돌을 계산한다.

 @param[in] object_a 충돌 여부를 판단할 첫 번째 Entity 구조체
 @param[in] object_b 충돌 여부를 판단할 두 번째 Entity 구조체

 @return 충돌했으면 1, 충돌하지 않았으면 0
 @ingroup Utils
*/
//int CheckCollisionObjects(Entity *collationObjectA, Entity *collationObjectB);

