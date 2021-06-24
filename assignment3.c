#include<stdio.h>
#include<ctype.h>
void reverseNumber();
void nTimesMessage();
void factorial();
void sumToN();
void squareToN();
void isPrime();



int main(){
    //reverseNumber();
    //nTimesMessage();
    //factorial();
    //sumToN();
    // squareToN();
    isPrime();
}
void reverseNumber(){
    int num;
    printf("Enter a number :/> ");
    scanf("%d",&num);
    while(num!=0){
        int rem=num%10;
        num=num/10;
        printf("%d",rem);
    };
}

void nTimesMessage(void){
    int repeat;
    printf("Repeat time: ");
    scanf("%d",&repeat);
    while(repeat>0){
        printf("Get well soon\n");
        repeat--;
    }
}

void factorial(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorials of %d are: ",num); 
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d,",i);
        }
    }
}

void sumToN(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=num*(num+1)/2;
    printf("Sum upto %d is %d",num,sum);
}

void squareToN(){
    int num/*,sqSum=0*/;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sqsum=num*(num+1)*(2*num+1)/6;
    // for(int i=1;i<=num;i++){
    //     sqSum+=i*i;
    // }
    printf("Sum of square of natural number upto %d is %d",num,sqsum);
}

void isPrime(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("%d is not a prime number !!",num);
            break;
        };
    }
    if(i==num){
        printf("%d is a prime number",num);
    }
}

