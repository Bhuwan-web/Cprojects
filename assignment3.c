#include<stdio.h>
#include<ctype.h>
int singleUserInput();
void reverseNumber();
void nTimesMessage();
void factorial();
void sumToN();
void squareToN();
void isPrime();



int main(){
    int questions,choose;
    printf("Choose question to visit\n\
    1.Reverse the given number\n\
    2.Print statement user defined times\n\
    3.Find the factorial of given number\n\
    4.Sum to n numbers\n\
    5.Square to n terms\n\
    6.Check if user provided number is prime or not.\n\n\
    Choose a Program number:/>");
    scanf("%d",&questions);
    switch(questions){
        case 1:
            reverseNumber();
            break;
        case 2:
            nTimesMessage();
            break;
        case 3:
            factorial();
            break;
        case 4:
            sumToN();
            break;
        case 5:
            squareToN();
            break;
        case 6:
            isPrime();
            break;
        default:
            printf("You haven't selected any projects");
    }
    printf("\n\n\
    1.View Project again \n\
    2.Exit\n\
    Choose(1-2):/>");
    scanf("%d",&choose);
    if(choose==1){
        printf("\n\n************************************\n\n");
        main();
    }
}

int singleUserInput(){
    int num;
    printf("Enter a number :/> ");
    scanf("%d",&num);
    return num;
}

void reverseNumber(){
    int num=singleUserInput();
    while(num!=0){
        int rem=num%10;
        num=num/10;
        printf("%d",rem);
    };
}

void nTimesMessage(){
    int repeat;
    printf("Repeat time: ");
    scanf("%d",&repeat);
    while(repeat>0){
        printf("Get well soon\n");
        repeat--;
    }
}

void factorial(){
    int num=singleUserInput();
    printf("Factorials of %d are: ",num); 
    double fact=1;
    for(int i=1;i<=num;i++){
        fact=i*fact;
    }
    printf("The factorial of %d is %lf",num,fact);
}

void sumToN(){
    int num=singleUserInput();
    int sum=num*(num+1)/2;
    printf("Sum upto %d is %d",num,sum);
}

void squareToN(){
    int num=singleUserInput();
    int sqsum=num*(num+1)*(2*num+1)/6;
    // for(int i=1;i<=num;i++){
    //     sqSum+=i*i;
    // }
    printf("Sum of square of natural number upto %d is %d",num,sqsum);
}

void isPrime(){
    int num=singleUserInput();
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

