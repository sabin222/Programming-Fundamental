/*
Name : Sabin Koju
Subject : Programming fundamental
Roll : 12
Lab sheet No : 02
Program : Write a c-program to print product and sum of three numbers.
Date : 16 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c,sum,product;

printf("\n\t\t\t --==+++++11333+++4444+++555---112222--");
printf("\n\t\t\t --==+++++333** WELCOME **555---12222--\n\n");

printf("\n\n\t\t Enter the first Number : ");
scanf("%d",&a);
printf("\n\n\t\t Enter the Second Number : ");
scanf("%d",&b);
printf("\n\n\t\t Enter the Third Number : ");
scanf("%d",&c);
sum=a+b+c;
product=a*b*c;
printf("\n\t\t\t --==+++++11333+++4444+++555---112222--\n\n");
printf("\n\n\t\t     The sum of Three number is : %d \n\n",sum);
printf("\n\n\t\t The product of Three number is : %d \n\n",product);

printf("\n\t\t\t --==+++++11333+++ END +++555---12222--\n\n");

getch();
return 0;
}
