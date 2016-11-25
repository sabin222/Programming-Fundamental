/*
Name : Sabin Koju
Roll : 12
Subject : programming fundamental
Lab No : 06
Program :WAP to check positive or negative number.
Date : 25 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (){
int a;
printf("\n Enter any Number : ");
scanf("%d",&a);
if(a>0)
{
    printf("\n The given number is Positive. ");
}
else if(a<0)
{
    printf("\n The given Number is Negative. ");
}

else
 {
    printf("\n The number is Zero. ");
}
getch();
return 0;
}
