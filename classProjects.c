#include<stdio.h>
void evenNumberLoop();
int main(){
    //all classroom projectsn will be combined in here
    evenNumberLoop();

}

void evenNumberLoop(){
    int num;
    printf("Print Even number upto: ");
    scanf("%d",&num);
    int i=0;
    while(i<=num){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }
}