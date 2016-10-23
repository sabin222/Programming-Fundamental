/*
Name: Sabin Koju
Roll:
Subject: Programming fundamental
Program: Write a c program simple calculator using switch case.
Lab:
Date:23 oct,2016
*/

#include<stdio.h>
#include<math.h>

int main()

{
int a,b,result;
char c;
loop:
printf("======================***********************===============================");
printf("\n\t\t\t\t Simple Calculator");
printf("\n ++++++++++++++++++++++***********************===============================");

printf(" \n\t\t Enter any of the following :");
printf(" \n\t 1 for Additation ");
printf(" \n\t 2 for subtraction  ");
printf(" \n\t 3 for multipication  ");
printf(" \n\t 4 for division  ");
printf(" \n\t 0 for Exit ");
printf("\n ***********************=====================********************************\n\t\t");
printf("\n\t\t Select the number");
scanf("%c",&c);

printf("\n Enter first number : ");
scanf("%d",&a);
printf("\n Enter second Number : ");
scanf("%d",&b);

switch (c)
{
case '1':
result=a+b;
printf("\n sum of two number is: %d",result);
break;

case '2':
result=a-b;
printf("\n subtraction of two number is: %d",result);
break;	

case '3':
result=a*b;
printf("\n miltipication of two number is: %d",result);
break;

case '4':
result=a/b;
printf("\n division of two number is: %d",result);
break;
}
goto loop;
return 0;
}



