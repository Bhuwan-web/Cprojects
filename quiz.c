#include<stdio.h>
#include<conio.h>

    //Developer's World................

    int noOfQuestions=3;    //set how many questions will be there in quiz

    int noOfOptions=3;      //set how many options will be provided


    //...................................................
int main(){

    char userName[25];
    printf("Enter your name: ");
    scanf("%[^\n]s",&userName);
    printf("\n\n \
        \tWelcome %s\n\n \
        \tLet's start the quiz\n \
******************************************************\n\n",userName);
    fflush(stdin);
    int points=0;
    char questions[][100]=
    {"1.What is my name?",                              //q1
    "2.How old i am?",                                  //q2
    "3.Where do I live?"};                              //q3
    char options[][3][50]=  //💀💀💀⚡⚡If you have 4 options on each question change 3 to 4 and so on
    {
        {"1.Bhuwan Panta","2.Sachin Panta","3.Sagar Panta"},//q1
        {"1. 17","2. 19","3. 20"},                          //q2
        {"1.Sunwal","2.Butwal","3.Kathmandu"}               //q3
    };
    int answers[]={1,3,1};
    for(int qnsNo=0;qnsNo<noOfQuestions;qnsNo++){
        int userAns=0;
        printf("%s\n",questions[qnsNo]);
        for(int option=0;option<noOfOptions;option++){
            printf("  %s\n",options[qnsNo][option]);
        }
        printf("Choose correct option: ");
        scanf("%d",&userAns);
        printf("\n\t");
        if(userAns==answers[qnsNo]){
            printf("Correct Answer!!😀");
            points+=10;
        }
        else if(userAns<1 || userAns>noOfOptions){
            printf("Those are not the availble options");
        }
        else{
            printf("Wrong Answer!!");
        }
        printf("\n\n");
    }
    printf("Congratulations %s,You scored %d points",userName,points);
    getch();
}