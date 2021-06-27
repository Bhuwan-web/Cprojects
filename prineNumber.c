#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,j;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            };
        };
        if(i==j){
            printf("%d\t",i);
        }    
    };
    
}