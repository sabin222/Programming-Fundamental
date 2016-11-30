/*
Name : Sabin Koju
Subject : Programming fundamental
Roll : 12
Lab sheet No : 08
Program : WAP to use assignment operator.
Date : 30 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;

printf("\n Enter first number : ");
scanf("%d",&a);
printf("\n Enter second number : ");
scanf("%d",&b);

a+=b;
printf("\n  a += b   %d",a+=b);
a-=b;
printf("\n  a -= b  %d",a-=b);
a*=b;
printf("\n  a *= b  %d",a*=b);
a/=b;
printf("\n  a /= b  %d",a/=b);

getch();
return 0;
}
