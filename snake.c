#include<stdio.h>
#include<stdlib.h>
int width=80;
int height=20;
int snakeX,snakeY,foodX,foodY;
void wall(){
    for(int wallY=1;wallY<=height;wallY++){
        for(int wallX=1;wallX<=width;wallX++){
            if(wallY==1 || wallY==height)
            {
                printf("=");
            }
            else if( wallX==1 || wallX==width)
              {
                printf("|");
            }
            else{
                if(wallX==snakeX && wallY==snakeY){
                    printf("S");
                }
                else if(wallX==foodX && wallY==foodY){
                    printf("0");
                }
                else{
                    printf(" ");
                }   
            }
        }
        printf("\n");
    }

}

void snake(){
snakeX=width/2;
snakeY=height/2;
stage1:
foodX=rand() % width;
foodY=rand() % height;
if(foodX==0 || foodX==width || foodY==0 || foodY==height)
    goto stage1;

}
int main(){
    snake();
    wall();
}