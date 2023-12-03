

#include "defs.h"
#include "init.h"
#include "input.h"
int main(void) {
    int tmpcnt = 0;

    srand(time(NULL));


    InitMemorySet();
    InitSDL();
    InitTTF();
    InitGameOver();
    InitPlayer();
    InitBullet();
    InitScoreBoard();
    InitSound();
    LoadSound();

    PlayBGM();

    for (;;) {
        ClearWindow();

        Drawstart();

        click1(){
        
        }

        WindowChoice()

        click2(){

        }

        WindowGameSetting(){
            
        }
    

    switch ()
    case(1)
    void Drawgame(){
        InitPlayer()
        Initgravity()
        InitBall()
        Initgoaldae()
        Initscoreboard()
        if(){
            while(3 != score){
           
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
        if(){
            while(5 != score){
           
            Drawgame()
            }
        }
    }
    break;

    if()
            Draw1pwin(){
              
            }
        else
            Draw2pwin()

    
        ShowWindow();
        SDL_Delay(16);
    }

    return 0;
}
