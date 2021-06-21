#include<stdio.h>
void evenNumberLoop();
void isPrime();
int main(){
    //all classroom projectsn will be combined in here
    evenNumberLoop();
    isPrime();

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

void isPrime(){
    int num;
    printf("\n\n Program to check if it's prime or not \n\
    \tEnter a number: ");
    scanf("%d",&num);
    int i=2;
    while(i<num){
        if(num%i==0){
            printf("%d is not a Prime Number",num);
            break;
        }
        i++;
    }
    if(i==num){
        printf("%d is prime number",num);
    }
}