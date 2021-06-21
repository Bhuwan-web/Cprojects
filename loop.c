#include<stdio.h>
void counting(int start,int end);
int main(){
    counting(1,100);
}
void counting(int start,int end){
    if(start>end){
    }
    else{
        printf("%d \n",start);
        counting(start+1,end);
    }
}



    // for(int i=0;i<5;i++){
    //     printf("Hello BMC First Semester\n");
    // }
    // int i=0;
    // while(i<5){
    //     printf("Hello BMC First Semester\n");
    //     i++;
    // }