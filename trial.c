#include<stdio.h>
int main(){
    int i;

    char ch_arr[][100] = {
                             "1.What is my name?",
                             "tom",
                             "jerry"
                         };

    printf("1st way \n\n");

    for(i = 0; i < 3; i++)
    {
        printf("string = %s \t address = %u\n", ch_arr + i, ch_arr + i);
    }

    // signal to operating system program ran fine
    return 0;
    // int side1,side2,side3;
    // printf("Enter sides of traingle:\n\tSide1: ");
    // scanf("%d",&side1);
    // printf("\tSide 2: ");
    // scanf("%d",&side2);
    // printf("\tSide 3: ");
    // scanf("%d",&side3);
    // if(side1==side2!=side3 || side2==side3!=side1|| side3==side1!=side2)
    // {
    //     printf("Is Isosceles");
    // }
    // else{
    //     printf("not Isosceleles");
    // }
}