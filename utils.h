#pragma once
#define UTILS_H

#include "defs.h"

/* main.h�� ���ǵ� ���� ���� ��� */


/**
 @brief ���ΰ� Ȥ�� �Ѿ��� �� ������ �Ѿ���� Ȯ��

 Entity ��ü�� �� ������ �Ѿ���� �����Ѵ�.

 @param[in] object Ž�� ��� Entity�� ����ü

 @return �� ������ �Ѿ�� 1, �� �ȿ� ������ 0
 @ingroup Utils
*/
//int CheckCollisionWall(Entity *collationObject);

/**
 @brief ���ΰ� Ȥ�� �Ѿ��� ��� ���� ���� �浹�ߴ��� Ȯ��

 ���� ƨ��� ���������� �����ϱ� ����, Entity ��ü�� ��� �� ���� �浹�ߴ��� Ȯ���Ѵ�.

 @param[in] object Ž�� ��� Entity�� ����ü

 @return
       �΋H���� ������ 0
       ���� ���� �΋H���� \ref LEFT_WALL
       ������ ���� �΋H���� \ref RIGHT_WALL
       �� ���� �΋H���� \ref TOP_WALL
       �Ʒ� ���� �΋H���� \ref BOTTOM_WALL
 @ingroup Utils
*/
//int CheckCollisionSide(Entity *collationObject);

/**
 @brief �� Entity �� �浹 ���θ� �Ǵ�

 �� Entity �� �浹 ���θ� �Ǵ��Ѵ�. \ref Entity.pos �� SDL2 ���̺귯������
 ������ SDL_Rect ����ü�̴�. �� ����ü�� ��� ������ (x, y)��ǥ�� (w, h)
 �ʺ�/���� ���� ������. (x, y)�� �ʱ�ȭ ���� �Ǵ� \ref Action ��⿡�� ��������
 ���Ǹ� (w, h)�� \ref Draw ��⿡�� �ؽ��� ������ �������� ���ȴ�. SDL2����
 �����ϴ� SDL_HasIntersection �Լ��� �̿��Ͽ� �� ���� SDL_Rect ����ü�� ��������
 �ִ��� �Ǻ��ϴ� ������� �浹�� ����Ѵ�.

 @param[in] object_a �浹 ���θ� �Ǵ��� ù ��° Entity ����ü
 @param[in] object_b �浹 ���θ� �Ǵ��� �� ��° Entity ����ü

 @return �浹������ 1, �浹���� �ʾ����� 0
 @ingroup Utils
*/
//int CheckCollisionObjects(Entity *collationObjectA, Entity *collationObjectB);

