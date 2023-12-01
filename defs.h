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

/*��� ��ũ�� ����*/
#define FPS 60              /**< ���� FPS*/
#define BUFSIZE 3        /**< ���ڿ� ���� ũ��*/
#define field_height 410
#define field_width 640
#define SCREEN_WIDTH 640    /**< ȭ�� �ʺ�(�ȼ�)*/
#define SCREEN_HEIGHT 480   /**< ȭ�� ����(�ȼ�)*/
#define Goal_net_width 120
#define Goal_net_height 150
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#define player_width 85
#define player_Height 90
#define PLAYER_SPEED 4      /**< �÷��̾� ��ü �ӵ�(�����ð��� �̵���)*/
#define BALL_width 10
#define BALL_height 10
#define BALL_SPEED 6      /**<  �� ��ü �ӵ�(�����ð��� �̵���)*/
#define PLAYER_BALL 2      /**< �÷��̾� ��ü ����*/

#define FONTSIZE 20         /**< ����� ���ڿ� ��Ʈ ũ��*/

#define LEFT_WALL 1         /**< �浹 ���� �� ���� ���� ��Ÿ���� ���*/
#define RIGHT_WALL 2        /**< �浹 ���� �� ������ ���� ��Ÿ���� ���*/
#define TOP_WALL 3          /**< �浹 ���� �� ���� ���� ��Ÿ���� ���*/
#define BOTTOM_WALL 4       /**< �浹 ���� �� �Ʒ��� ���� ��Ÿ���� ���*/
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20


/*����ü ����*/
/**
 @brief  App: ���α׷� ��ü������ �����ؾ� �ϴ� ��Ҹ� ��� ���� ����ü
*/
typedef struct App{
    SDL_Renderer *renderer; /**< ������ ������ ���� ����ü*/
    SDL_Window *window;     /**< â ������ ���� ����ü*/
    TTF_Font *font;         /**< ��Ʈ ������ ���� ����ü*/
    int key_up;             /**< �� ����Ű�� ���� ���¸� �����ϴ� ����*/
    int key_down;           /**< �Ʒ� ����Ű�� ���� ���¸� �����ϴ� ����*/
    int key_left;           /**< ���� ����Ű�� ���� ���¸� �����ϴ� ����*/
    int key_right;          /**< ������ ����Ű�� ���� ���¸� �����ϴ� ����*/
    int key_r;              /**< RŰ�� ���� ���¸� �����ϴ� ����*/
} App;
// ����ü ����: 2���� ����
typedef struct Vector2D{
    float x;
    float y;
} Vector2D;

// ����ü ����: ��ü
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

/**
 @brief  Entity: ���� ������ �����̴� ��ü�� �����ϱ� ���� ����ü(���ΰ�, �Ѿ�)
*/
typedef struct Entity{
    SDL_Rect pos;            /**< ���簢�� ��ü�� ���¸� ��Ÿ���� ���� ����ü
                                ���⿡ ��ü�� ��ǥ, ��ġ ����*/
    float mass;
    unsigned startTime;   
    double theta;           /**< �Ѿ�-���ΰ� �� ������ �����ϴ� ����*/
    double v_x;             /**< �Ѿ�-���ΰ� �� x���� �ӵ�����*/
    double v_y;             /**< �Ѿ�-���ΰ� �� y���� �ӵ�����*/
    SDL_Texture *texture;   /**< �ؽ��ĸ� ��� �ִ� ����ü (�׸������� ����
                                 �ؽ��Ŀ� ����)*/
} Entity;

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

extern App app;
extern Entity player[3];
extern Entity game_over;
extern Text score_board;
extern int score;
extern Mix_Music *bgm;
extern Mix_Chunk *death_effect;
extern Entity player[3];
extern Entity BALL;
extern Entity field;
extern Entity LGoalnet;
extern Entity RGoalnet;
void elasticCollision2D(Entity *object1, Entity *object2);
#endif
