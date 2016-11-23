/*
Name : Sabin Koju
Subject : Programming fundamental
Lab No : 01
Program : WPA to find roots of Quadratic eqn Value assigned by user.
Date :14 Nov 2016
Roll:
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
float x1,x2,a,b,c;
printf("\n Enter the value of A : ");
scanf("%f",&a);
printf("\n Enter the value of B : ");
scanf("%f",&b);
printf("\n Enter the value of C : ");
scanf("%f",&c);

x1=(sqrt(pow(b,2)-(4*a*c)))/(2*a);

x2= -(sqrt(pow(b,2)-(4*a*c)))/(2*a);

printf("\n\n The value of first root is : %f",x1);
printf("\n\n The value of second root is : %f",x2);

getch();
return 0;
}
