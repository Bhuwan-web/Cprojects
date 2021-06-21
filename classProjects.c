#include<stdio.h>
int isPrime();
int main(){
    //all classroom projectsn will be combined in here
    isPrime();
}
int isPrime(){
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