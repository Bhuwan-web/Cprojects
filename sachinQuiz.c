#include<stdio.h>
void main(){
int a,b,count=0,A=0;
char *D;
printf("Welcome to QUIZ!\n");
printf("Created By Sachin Pantha!\n\n");
printf(">Enter your full Name!\n");
scanf("%s",&D);
printf("\n");
printf("Welcome %s!!\n",D);
printf("Let's start the Quiz!\n\n");
printf("PRESS '1' to start if you're ready!\n");
scanf("%d",&b);
if(b==1)
{
printf("---------------------------------------\n");
printf("Type the appropriate number to answer.\n");
printf("---------------------------------------\n");
printf("Q)Who is current CEO of Microsoft?\n");
printf("1)Sundar Pichai\n");
printf("2)Bill gates\n");
printf("3)Satya Nadella\n");
printf("4)Melinda Gates\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==3 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 3)Satya Nadella\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy!Try next one!\n");
printf("Correct answer was 3)Satya Nadella\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)What is value of mass of electron?\n");
printf("1)9.1×10^-23Kg\n");
printf("2)9.1×10^-33Kg\n");
printf("3)9.1×10^-31Kg\n");
printf("4)9.1×10^-24Kg\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==3 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 3)9.1×10^-31\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 3)9.1×10^-31\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Who Propounded Schrodinger equation?\n");
printf("1)Henry Schrodinger\n");
printf("2)Erwin Schrodinger\n");
printf("3)Charles Schrodinger\n");
printf("4)Hippocrates\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==2 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 2)Erwin Schrodinger\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 2)Erwin Schrodinger\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)In which Laboratory C language was found?\n");
printf("1)Wuhan Lab\n");
printf("2)Kemotus Labs\n");
printf("3)South Wales Labs\n");
printf("4)AT&T Bell Labs\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==4 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 4)AT&T Bell Labs\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 4)AT&T Bell Labs\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Who was the mastermind behind Scam 1992?\n");
printf("1)Harshad Mehta\n");
printf("2)Abdul Karim Telgi\n");
printf("3)Dawood Ibrahim\n");
printf("4)Nawaz Sharif\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==1 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 1)Harshad Mehta\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 1)Harshad Mehta\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Which country is known as sugar bowl?\n");
printf("1)Budapest\n");
printf("2)Cuba\n");
printf("3)Amsterdam\n");
printf("4)USSR\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==2 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 2)Cuba\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 2)Cuba\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Which country won 2018 FIFA world cup?\n");
printf("1)Croatia\n");
printf("2)Portugal\n");
printf("3)Spain\n");
printf("4)France\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==4 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 4)France\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 4)France\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Who invented C programming language?\n");
printf("1)Larry page\n");
printf("2)Sergrey brin\n");
printf("3)Dennis ritchie\n");
printf("4)Larry parker\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==3 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 3)Dennis ritchie\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 3)Dennis ritchie\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)Which of following is OOP?\n");
printf("1)C\n");
printf("2)C++\n");
printf("3)BASIC\n");
printf("4)Pascal\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==2 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 2)C++\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 2)C++\n");
printf("---------------------------------------\n");
}
printf("(NEXT QUESTION!)\n");
printf("Q)How many data types are there in python?\n");
printf("1)Four\n");
printf("2)Five\n");
printf("3)Six\n");
printf("4)Seven\n");
printf("ANSWER:>");
scanf("%d",&a);
if(a==2 && a>=1 && a<=4)
{
printf("Hurray! Correct Answer!\n");
count+=10;
printf("you gained %d points\n",count);
A++;
printf("---------------------------------------\n");
}
else if(a<1 || a>4)
{
printf("Option doesn't exist!Try next one!\n");
printf("Correct answer was 2)Five\n");
printf("---------------------------------------\n");
}
else
{
printf("Wrong answer buddy! Try next one!\n");
printf("Correct answer was 2)Five\n");
printf("---------------------------------------\n");
}
printf("\t ***GAME COMPLETED***\n\n\n");
printf("Thank you %s for playing game!\n",D);
printf("--------------\n"); 
printf("SCOREBOARD!!!!\n");
printf("--------------\n");
printf("Total Questions Asked=10\n");
printf("Total points =%d\n",count);
printf("Correctly Answered Question=%d\n",A);
printf("Wrong Answered Question=%d\n",(10-A));
}
else
{
printf("Invalid!");
}
}
