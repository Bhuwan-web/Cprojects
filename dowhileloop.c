#include<stdio.h>
void doWhile();
void first();
void multiplication();
int main(){
    //first();
    //doWhile();
    multiplication();

}
void first(){
    int i=0;
    do{
        printf("Hello BMC First Semister\n");
        i++;
    }while(i<5);
}

void doWhile(){
    // even number 2 to 100
    int i=2;
    do{
        if(i%2==0){
            printf("%d\n",i);

        }
        i++;
    }while(i<=100);
}
void multiplication(){
    int num=8,multiplicationUpto=10,count=1;

    do{
        printf("%d x %d=%d\n",num,count,num*count);
        count++;
    }while(count<=multiplicationUpto);
}

void hotelMenu(){
    char ch,cho;
    do {
        Printf("\tMenu \n\
        c\t CHOWMIN\n \
        m\t MOMO\n \
        b\t BURGER\n\n \
        Please Enter your choice: ")
        scanf("%c",&ch);
        fflush(stdio);
        switch(ch){
            case 'c':
                printf("yor order is Chowmin");
                break;
            case 'm':
                printf("yor order is MOMO");
                break;
            case 'b':
            printf("yor order is Burger");
                break;
        }
        printf("Would you like to add more: ");
        scanf("%c",cho);
        fflush(stdio);
        
    }
}