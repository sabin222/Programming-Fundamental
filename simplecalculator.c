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
printf("\n Enter first number : ");
scanf("%d",&a);
printf("\n Enter second Number : ");
scanf("%d",&b);
printf("\n Enter(+,-,*,/):");
c=getchar();
scanf("%c",&c);

switch(c){
case '+':
result=a+b;
printf("\n sum of two number is: %d",result);
break;

case '-':
result=a-b;
printf("\n subtraction of two number is: %d",result);
break;

case '*':
result=a*b;
printf("\n multipication of two number is: %d",result);
break;

case '/':
result=a/b;
printf("\n division of two number is: %d",result);
break;
default:
printf("processing");}


return 0;
}


