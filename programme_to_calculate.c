/*
Name: Sabin koju
Roll:
Subject: Programming fundamental
Lab no:08
Program: Write a program that takes three number as input as integer from keybord then print sum,average,product,smallest and largest numbers.
Date:25 oct,2016
*/

#include<stdio.h>

int main()
{
int a,b,c,sum,average,product;
printf("\n Enter first number :");
scanf("%d",&a);
printf("\n Enter second number :");
scanf("%d",&b);
printf("\n ENter third number :");
scanf("%d",&c);
sum=(a+b+c);
printf("\n Sum of three number is : %d",sum);
average=(a+b+c/3);
printf("\n Average of three numbers is :%d",average);
product=(a*b*c);
printf("\n Product of three numbers is :%d",product);
if (a<=b&&a<=c)
printf("\n First number 'a' is smallest.");
else if (b<=a && b<=c)
printf("\n second number 'b'is smallest.");
else if (c<a&&c<b)
printf("\n number 'c' is smallest.");
else
printf("\n Number is not valid.");

if (a>=b&&a>=c)
printf("\n First number 'a' is largest.");
else if (b>=a&&b>=c)
printf("\n second number 'b'is largest.");
else if (c>a&&c>b)
printf("\n Third number 'c' is largest.");
else
printf("\n Number is not valid.");

return 0;
}
