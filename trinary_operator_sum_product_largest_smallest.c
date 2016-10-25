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
sum=a+b+c;
printf("\n Sum of Three number is :%d",sum);
average=a+b+c/3;
printf("\n Average of Three number is :%d",average);
product=a*b*c;
printf("\n Product of three number is :%d",product);

(a>=b&&a>=c)? printf("\n a is largest"):
(b>=a&&b>=c)? printf("\n b is largest"):
printf("\n c is largest");

(a<=b&&a<=c)? printf("\n a is smallest"):
(b<=a&&b<=c)? printf("\n b is Smallest"):
printf("\n c is smallest");

return 0;
}

