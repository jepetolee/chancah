

#include "defs.h"
#include "init.h"
#include "input.h"
int main(void) {
    int tmpcnt = 0;

    srand(time(NULL));

    /* 1. 초기화 */
    InitMemorySet();
    InitSDL();
    InitTTF();
    InitGameOver();
    InitPlayer();
    InitBullet();
    InitScoreBoard();
    InitSound();
    LoadSound();

    /* BGM은 계속 재생되므로 루프 밖에서 재생 */
    PlayBGM();

    /* 2. 프로그램 무한 루프 
    for (;;) {
        /* (1) 빈 화면 만들기
        ClearWindow();

        Drawstart();
        
        /*
        click1(){
            가운데부분만 인식.
        }

        WindowChoice()

        click2(){
            3줄로 나눠서 인자값 따로 받아야함.
            2번받아야 다음화면 넘어가기.
        }

        WindowGameSetting(){
            3,5,7,9칸 놓고서 몇골이 끝일지 선택
        }
    

    switch ()
    case(1)
    void Drawgame(){
        InitPlayer()
        Initgravity()
        InitBall()
        Initgoaldae()
        Initscoreboard()
        점수판이 다 초기화가 되었어야해.
        초기화 방식이 점수가 어떤 변수로 들어가있고,
        if(공이 들어가면){
            while(3 != score){
            점수인 변수가 카운트가 하나 올라가고
            Drawgame()
            }
        }
    }
    break;

    case(2)
    void Drawgame(){
        InitPlayer()
        Initgravity()
        InitBall()
        Initgoaldae()
        Initscoreboard()
        점수판이 다 초기화가 되었어야해.
        초기화 방식이 점수가 어떤 변수로 들어가있고,
        if(공이 들어가면){
            while(5 != score){
            점수인 변수가 카운트가 하나 올라가고
            Drawgame()
            }
        }
    }
    break;

    if(점수판 비교)
            Draw1pwin(){
                가운데에 1pwin 그 밑에 사각형 이미지 파일로 Press R
            }
        else
            Draw2pwin()

        /* (4) 화면 보여주기 
        ShowWindow();

        /* 일정 시간 대기 (60FPS 기준 한 프레임에 16ms) 
        SDL_Delay(16);
    }
*/
    return 0;
}
