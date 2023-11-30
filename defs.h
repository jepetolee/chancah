#ifndef DEFS_H
#define DEFS_H

#include "collision.h"
#include "ctype.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"

/*상수 매크로 정의*/
#define FPS 60              /**< 게임 FPS*/
#define BUFSIZE 3        /**< 문자열 버퍼 크기*/
#define field_height 410
#define field_width 640
#define SCREEN_WIDTH 640    /**< 화면 너비(픽셀)*/
#define SCREEN_HEIGHT 480   /**< 화면 높이(픽셀)*/
#define Goal_net_width 120
#define Goal_net_height 150
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#define player_width 85
#define player_Height 90
#define PLAYER_SPEED 4      /**< 플레이어 객체 속도(단위시간당 이동량)*/
#define BALL_width 10
#define BALL_height 10
#define BALL_SPEED 6      /**<  공 객체 속도(단위시간당 이동량)*/
#define PLAYER_BALL 2      /**< 플레이어 전체 갯수*/

#define FONTSIZE 20         /**< 출력할 문자열 폰트 크기*/

#define LEFT_WALL 1         /**< 충돌 판정 시 왼쪽 벽을 나타내는 상수*/
#define RIGHT_WALL 2        /**< 충돌 판정 시 오른쪽 벽을 나타내는 상수*/
#define TOP_WALL 3          /**< 충돌 판정 시 위쪽 벽을 나타내는 상수*/
#define BOTTOM_WALL 4       /**< 충돌 판정 시 아래쪽 벽을 나타내는 상수*/
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20


/*구조체 정의*/
/**
 @brief  App: 프로그램 전체적으로 관리해야 하는 요소를 모아 놓은 구조체
*/
typedef struct {
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
typedef struct {
    float x;
    float y;
} Vector2D;

// 구조체 정의: 물체
typedef struct {
    float mass;
    Vector2D velocity;
} Object;
typedef struct{ 
   void (*itemFunc)();
   SDL_Rect pos;
   Uint32 startTime;
   SDL_bool isActive;
}Item;

/**
 @brief  Entity: 게임 내에서 움직이는 물체를 구현하기 위한 구조체(주인공, 총알)
*/
typedef struct {
    SDL_Rect pos;            /**< 직사각형 객체의 상태를 나타내기 위한 구조체
                                여기에 객체의 좌표, 위치 저장*/
    float mass;
    unsigned startTime;   
    double theta;           /**< 총알-주인공 간 각도를 저장하는 변수*/
    double v_x;             /**< 총알-주인공 간 x방향 속도벡터*/
    double v_y;             /**< 총알-주인공 간 y방향 속도벡터*/
    SDL_Texture *texture;   /**< 텍스쳐를 담고 있는 구조체 (그림파일을 열어
                                 텍스쳐에 저장)*/
} Entity;

/**
 @brief  Text: 게임 내에 문자열을 표시할 경우 문자열을 나타내는 구조체(스코어보드)
*/
typedef struct {
    SDL_Rect pos;  
    SDL_Color color;        /**< 글씨 색깔을 저장하는 구조체*/
    SDL_Surface *surface;   /**< 폰트 렌더링을 위해 필요한 구조체*/
    SDL_Texture *texture;   /**< 텍스쳐를 담고 있는 구조체 (문자열을 surface로 만들고,
                                그 후 texture에 저장)*/
} Text;

#endif