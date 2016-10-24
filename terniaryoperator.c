/*
Name: Sabin koju
Roll:
Subject: Programming fundamental
Program: Write a c-program to take two input from user and print largest and smallest numbers using terniary operator. 
Lab:07
Date:24 oct,2016
*/

#include<stdio.h>
int main()
{
int a,b,largest,smallest;
printf("\n Enter fitst number :");
scanf("%d",&a);
printf("\n Enter second number :");
scanf("%d",&b);
largest=(a>b)?a:b;
smallest=(a<b)?a:b;
printf("\n\n Largest Number is :%d",largest);
printf("\n\n Smallest Number is :%d",smallest);

return 0;
}


