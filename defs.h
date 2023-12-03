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

/*상수 매크로 정의*/
#define FPS 60              /**< 게임 FPS*/
#define BUFSIZE 1024
#define BUFSIZE2 3
#define field_height 410
#define field_width 640
#define player1_width 85
#define player1_height 90
#define player2_width 100
#define player2_height 105
#define SCREEN_WIDTH 640    /**< 화면 너비(픽셀)*/
#define SCREEN_HEIGHT 480   /**< 화면 높이(픽셀)*/
#define Goal_net_width 120
#define Goal_net_height 180
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20

#define PLAYER_SPEED 3      /**< 플레이어 객체 속도(단위시간당 이동량)*/
#define PLAYER_SPEED2 5
#define BALL_width 10
#define BALL_height 10
#define BALL_SPEED 6      /**<  공 객체 속도(단위시간당 이동량)*/
#define PLAYER_BALL 2      /**< 플레이어 전체 갯수*/
#define FONTSIZE 20         /**< 출력할 문자열 폰트 크기*/
#define LEFT_WALL 1         /**< 충돌 판정 시 왼쪽 벽을 나타내는 상수*/
#define RIGHT_WALL 2        /**< 충돌 판정 시 오른쪽 벽을 나타내는 상수*/
#define TOP_WALL 3          /**< 충돌 판정 시 위쪽 벽을 나타내는 상수*/
#define BOTTOM_WALL 4       /**< 충돌 판정 시 아래쪽 벽을 나타내는 상수*/



/*����ü ����*/
/**
 @brief  App: ���α׷� ��ü������ �����ؾ� �ϴ� ��Ҹ� ��� ���� ����ü
*/
typedef struct App{

    SDL_Renderer *renderer; /**< 렌더링 관리를 위한 구조체*/
    SDL_Window *window;     /**< 창 관리를 위한 구조체*/
    TTF_Font *font;         /**< 폰트 관리를 위한 구조체*/
    int key_up;             /**< 위 방향키가 눌린 상태를 저장하는 변수*/
    int key_down;           /**< 아래 방향키가 눌린 상태를 저장하는 변수*/
    int key_left;           /**< 왼쪽 방향키가 눌린 상태를 저장하는 변수*/
    int key_right;          /**< 오른쪽 방향키가 눌린 상태를 저장하는 변수*/
    int key_r;              /**< R키가 눌린 상태를 저장하는 변수*/
} App;
// 구조체 정의: 2차원 벡터
typedef struct Vector2D{
    float x;
    float y;
} Vector2D;


// 구조체 정의: 물체
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
    SDL_Rect pos;            /**< 직사각형 객체의 상태를 나타내기 위한 구조체
                                여기에 객체의 좌표, 위치 저장*/

    float mass;
    unsigned startTime;   
    double theta;           /**< �Ѿ�-���ΰ� �� ������ �����ϴ� ����*/
    double v_x;             /**< �Ѿ�-���ΰ� �� x���� �ӵ�����*/
    double v_y;             /**< �Ѿ�-���ΰ� �� y���� �ӵ�����*/
    SDL_Texture *texture;   /**< �ؽ��ĸ� ��� �ִ� ����ü (�׸������� ����
                                 �ؽ��Ŀ� ����)*/
}Entity;

/**
 @brief  Text: ���� ���� ���ڿ��� ǥ���� ��� ���ڿ��� ��Ÿ���� ����ü(���ھ��)
*/
typedef struct Text{
    SDL_Rect pos;  
    SDL_Color color;        /**< �۾� ������ �����ϴ� ����ü*/
    SDL_Surface *surface;   /**< ��Ʈ �������� ���� �ʿ��� ����ü*/
    SDL_Texture *texture;   /**< �ؽ��ĸ� ��� �ִ� ����ü (���ڿ��� surface�� �����,
                                �� �� texture�� ����)*/
} Text;

App app;

Text score_board;
int score;

Mix_Music *bgm;
Mix_Chunk *death_effect;

Entity player[3];
Entity game_over;
Entity BALL;
Entity field;
Entity LGoalnet;
Entity RGoalnet;
 
Item items[2]; 
