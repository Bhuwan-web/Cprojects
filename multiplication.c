#include<stdio.h>
#include<conio.h>
int main(){
    //a little different approach to multiplication
    for(int i=1;i<=10;i++){
        for(int j=2;j<=10;j++){
            printf("%d x %d = %d  ",j,i,j*i);
        }
        printf("\n\n");
    }
    getch();
}