#include<stdio.h>
#include<math.h>
#include<conio.h>
void areaOfTraingle();
void oddOrEven();
void isIsosceles();
void ntcCallPrice();
void isPositive(int num);
void difference();
void mainProgram();
int main(void)
{
    int programNO=1;
    //all Programs related to assignments are solved in a single file.
    printf("Choose a program no. to check program(1-6):\n \
    \t1.Find area of Triangle \n \
    \t2.Check whether given number is odd or even \n \
    \t3.Check if the traingle is isosceles or not \n \
    \t4.Check if given number is positive or not \n \
    \t5.Check the cost of NTC calls under gien conditions \n \
    \t6.Difference between greatest and least number from three input numbers\n\n \
    \t choose between (1-6): ");
    scanf("%d",&programNO);
    switch (programNO){
        case 1:
            areaOfTraingle();

            break;
        case 2:
            oddOrEven();

            break;
        case 3:
            isIsosceles();

            break;
        case 4:
            isPositive(-10);

            break;
        case 5:
            ntcCallPrice();
            
            break;
        case 6:
            difference();
            
            break;
        default:
            printf("No Program Selected");
    }
    getch();
    mainProgram();
}
void mainProgram(){
    int code;
    printf("\n\n\t1. Continue \
            \t2.Exit\nchoose one number(1-2): \
            ");
    scanf("%d",&code);
    if(code==1)
        main();
    else{
    }
}

void areaOfTraingle(){
    int side1,side2,side3;
    printf("Enter sides of traingle:\n\tSide1: ");
    scanf("%d",&side1);
    printf("\tSide 2: ");
    scanf("%d",&side2);
    printf("\tSide 3: ");
    scanf("%d",&side3);
    printf("Checking for validation....\n");
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
        int s=side1+side2+side3;
        int area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        printf("The area of traningle is %d",area);
    }
    else{
        printf("Please enter valid sides for traingle");
    }

}

void oddOrEven(){
    int n;
    printf("Program to find out if the user defined number is odd or even\n");
    printf("\tEnter a number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even number",n);
    }
    else{
        printf("%d is odd number",n);
    }

}
void isIsosceles(){
    int side1,side2,side3;
    printf("Enter sides of traingle:\n\tSide1: ");
    scanf("%d",&side1);
    printf("\tSide 2: ");
    scanf("%d",&side2);
    printf("\tSide 3: ");
    scanf("%d",&side3);
    if(side1==side2 || side2==side3|| side3==side1)
    {
        if(side1==side2 && side1==side3){
            printf("The traingle is not Isosceles but equilateral");
        }else{
            printf(" given traingle is Isoceleles");
        }
    }
    else{
        printf("The traingle isnot isosceles");
    }
}
void ntcCallPrice(){
    int calls=0;
    printf("\n\tTotal no.of calls: ");
    scanf("%d",&calls);
    int cost=0;
    if(calls<30){
        cost=0;
    }
    else if(calls<60){
        int chargeableCalls=calls-30;
        cost=chargeableCalls*0.5;
    }
    else{
        int chargeableCalls=calls-60;
        cost=30*0.5+chargeableCalls*1;
    }
    printf("Total Cost charged for total calls is Rs %d",cost);
}

void isPositive(int num){
    if(num<0){
        printf("\n\tThe assigned number '%d' is not positive, it's negative\n",num);
    }
    else{
        printf("\n\tThe assigned numner '%d' is Positive\n",num);
    }
    printf("\n\nNote:The number is predeclared as functional argument");
}

void difference(){
    int num1,num2,num3,greatest,smallest;
    //difference between greatest and smallest
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d",&num1);
    printf("Number 2: ");
    scanf("%d",&num2);
    printf("Number 3: ");
    scanf("%d",&num3);
    int three[3]={num1,num2,num3};
    for(int i=2;i>0;i--){
        for(int j=0;j<i;j++){
            int temp=0;
            if(three[j]<three[j+1]){
                temp=three[j];
                three[j]=three[j+1];
                three[j+1]=temp;
            }
        }
    }
    int difference=three[0]-three[2];
    printf("The difference between greatest and smallest number is %d",difference);
}