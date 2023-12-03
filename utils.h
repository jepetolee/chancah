#pragma once

#include "defs.h"




int CheckCollisionWall(Entity *object) {

    if (object->pos.x < 0 || object->pos.x + object->pos.w > SCREEN_WIDTH ||
        object->pos.y < 0 || object->pos.y + object->pos.h > SCREEN_HEIGHT) {
        return 1;
    } else {
        return 0;
    }
}

int CheckCollisionSide(Entity *object) {

    if (object->pos.x < 0) {
        return LEFT_WALL;
    } else if (object->pos.x + object->pos.w > SCREEN_WIDTH) {
        return RIGHT_WALL;
    } else if (object->pos.y < 0) {
        return TOP_WALL;
    } else if (object->pos.y + object->pos.h > SCREEN_HEIGHT) {
        return BOTTOM_WALL;
    } else {
        return 0;
    }
}

int CheckCollisionObjects(Entity *object_a, Entity *object_b) {

    if (SDL_HasIntersection(&(object_a->pos), &(object_b->pos))) {
        return 1;
    } else {
        return 0;
    }
}
int CheckCollisionObject(Entity *object_a, Item *object_b) {

    if (SDL_HasIntersection(&(object_a->pos), &(object_b->pos))) {
        return 1;
    } else {
        return 0;
    }
}
