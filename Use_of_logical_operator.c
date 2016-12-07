/*
Name : Sabin koju
Roll : 28
Subject : Programming fundamental
Lab no : 10
program : WAP to use logical operator.
Date : 07 Dec 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a;
printf("\n Enter Your Score : ");
scanf("%d",&a);

if (a>=80)
        {
    printf("\n\n\t Congralution You have secured Distinction. %d",a );
        }
if (a>=60&&a<80)
   {
    printf("\n\n\t Congralution You have secured First Division. %d",a);
   }
 if (a>=45&&a<60)
    {
    printf("\n\n\t Congralution You have secured second Division. %d",a);
    }
if (a<45)
    {
    printf("\n\n\t Congralution You have secured Third Division. %d",a);

    }


getch();
return 0;
}
