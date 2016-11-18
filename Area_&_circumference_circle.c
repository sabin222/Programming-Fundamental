/*
Name : Sabin Koju
Subject : Programming fundamental
Roll : 12
Lab sheet No : 02
Program : Write a c-program to print area and circumference of circle and radius asked from user.
Date : 16 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float r,A,C;

printf("\n\t\t\t --==+++++11333+++4444+++555---112222--");
printf("\n\t\t\t --==+++++333** WELCOME **555---12222--\n\n");

printf("\n\t Enter Radius of Circle : ");
scanf("%f",&r);


A=3.14*r*r;
C=2*3.4*r;
printf("\n\n\t Area of circle is : %f",A);
printf("\n\n\t Circumference of circle is : %f",C);

printf("\n\n\n\t\t\t --==+++++11333+++ END +++555---12222--\n\n");
getch();
return 0;
}
