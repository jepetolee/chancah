/*아이템 정의 1번  속도 아이템 2번 크기커지기 아이템 셋째 한골넣으면 두배*/
#include "item.h"
#include <stdio.h>
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#define ITEM_COUNT 3
int checkitemFunctionOne(){
   int determinant1=0;
   for (int i=0;i<BUFSIZE;i++){
   determinant1=CheckCollisionObject(&player[i],&items[0]);
   if(determinant1){ return i;}

}
}


void itemFunctionOne(int i){
      player[i].v_x*=2;
      player[i].v_y*=2;
}

int checkitemFunctionTwo(){
   int determinant=0;
   for (int j=0;j<BUFSIZE;j++){
   determinant=CheckCollisionObject(& player[j],&items[1]);
   if(determinant){ return j;}
}
}

void itemFunctionTwo(int j){
      player[j].pos.x+player[j].pos.w*1.2;
      player[j].pos.y+player[j].pos.h*1.2;
}
int checkitemFunctionThree(){
int determinant=0;
   for (int k=0;k<BUFSIZE;k++){
   determinant=CheckCollisionObject(& player[k],&items[1]);
   if(determinant){ return k;}
}
}
void itemFunctionThree(int k){
      
}




void initializeItem(){
   items[0].itemFunc = itemFunctionOne;
   items[1].itemFunc = itemFunctionTwo;
}


void itemtotal(){
   int i=rand()%640;
   int j=rand()%410;
   void initializeItem();
   int randomItemNumber = rand()%3;
   
   if ( randomItemNumber == 0 ){
   items[0].itemFunc();
   items[0].pos.x=i;
   items[0].pos.y=j;
   }
   else if(randomItemNumber ==1 ){
   items[1].itemFunc();
   items[1].pos.x=i;
   items[1].pos.y=j;
  }
  else {
   items[2].itemFunc();
   items[2].pos.x=i;
   items[2].pos.y=j;
  }
  itemFunctionOne(checkitemFunctionOne());
  itemFunctionTwo(checkitemFunctionTwo());
  itemFunctionThree(checkitemFunctionThree());
      
}
