#include<stdio.h>
int main(){
    int first=1,second=0,temp=0;
    for(int i=0;i<20;i++){
        printf("%d,",second);
        temp=first;
        first=second;
        second+=temp;
    }
}