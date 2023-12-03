#pragma once

#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

#define FPS 60         
#define BUFSIZE 1024
#define BUFSIZE2 3
#define field_height 410
#define field_width 640
#define player1_width 85
#define player1_height 90
#define player2_width 100
#define player2_height 105
#define SCREEN_WIDTH 640  
#define SCREEN_HEIGHT 480 
#define Goal_net_width 120
#define Goal_net_height 180
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#define PLAYER_SPEED 3     
#define PLAYER_SPEED2 5
#define BALL_width 10
#define BALL_height 10
#define BALL_SPEED 6    
#define PLAYER_BALL 2  
#define FONTSIZE 20       
#define LEFT_WALL 1     
#define RIGHT_WALL 2     
#define TOP_WALL 3        
#define BOTTOM_WALL 4      

typedef struct Application{
    SDL_Renderer *renderer; 
    SDL_Window *window; 
    TTF_Font *font;     
    int key_up;          
    int key_down;       
    int key_left;       
    int key_right;        
    int key_r;            
} Application;
typedef struct Vector2D{
    float x;
    float y;
} Vector2D;

typedef struct Object{
    float mass;
    Vector2D velocity;
} Object;

typedef struct Item{ 
   void (*itemFunc)();
   SDL_Rect pos;
   Uint32 startTime;
   SDL_bool isActive;
}Item ;


typedef struct Entity{
    SDL_Rect pos;           
    float mass;
    unsigned startTime;   
    double theta;       
    double v_x;           
    double v_y;        
    SDL_Texture *texture;   
} Entity;


typedef struct Text{
    SDL_Rect pos;  
    SDL_Color color;     
    SDL_Surface *surface;  
    SDL_Texture *texture; 
} Text;

Application application;

Text score_board;
int score;
Item items[3];
Entity player[3];
Entity BALL;
Entity field;
Entity LGoalnet;
Entity RGoalnet;
Entity game_over;


void elasticCollision2D(Entity *object1, Entity *object2);

