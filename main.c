

#include "defs.h"
#include "init.h"
#include "input.h"
int main(void) {
    int tmpcnt = 0;

    srand(time(NULL));

    /* 1. �ʱ�ȭ */
    InitMemorySet();
    InitSDL();
    InitTTF();
    InitGameOver();
    InitPlayer();
    InitBullet();
    InitScoreBoard();
    InitSound();
    LoadSound();

    /* BGM�� ��� ����ǹǷ� ���� �ۿ��� ��� */
    PlayBGM();

    /* 2. ���α׷� ���� ���� 
    for (;;) {
        /* (1) �� ȭ�� �����
        ClearWindow();

        Drawstart();
        
        /*
        click1(){
            ����κи� �ν�.
        }

        WindowChoice()

        click2(){
            3�ٷ� ������ ���ڰ� ���� �޾ƾ���.
            2���޾ƾ� ����ȭ�� �Ѿ��.
        }

        WindowGameSetting(){
            3,5,7,9ĭ ���� ����� ������ ����
        }
    

    switch ()
    case(1)
    void Drawgame(){
        InitPlayer()
        Initgravity()
        InitBall()
        Initgoaldae()
        Initscoreboard()
        �������� �� �ʱ�ȭ�� �Ǿ������.
        �ʱ�ȭ ����� ������ � ������ ���ְ�,
        if(���� ����){
            while(3 != score){
            ������ ������ ī��Ʈ�� �ϳ� �ö󰡰�
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
        �������� �� �ʱ�ȭ�� �Ǿ������.
        �ʱ�ȭ ����� ������ � ������ ���ְ�,
        if(���� ����){
            while(5 != score){
            ������ ������ ī��Ʈ�� �ϳ� �ö󰡰�
            Drawgame()
            }
        }
    }
    break;

    if(������ ��)
            Draw1pwin(){
                ����� 1pwin �� �ؿ� �簢�� �̹��� ���Ϸ� Press R
            }
        else
            Draw2pwin()

        /* (4) ȭ�� �����ֱ� 
        ShowWindow();

        /* ���� �ð� ��� (60FPS ���� �� �����ӿ� 16ms) 
        SDL_Delay(16);
    }
*/
    return 0;
}
