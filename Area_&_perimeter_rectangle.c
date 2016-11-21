/*
Name : Sabin Koju
Subject : Programming fundamental
Roll :12
Program : WPA to print area and perimeter rectangle.
Lab No : 04
Date : 21 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float b,l,A,P;
printf("\n Enter the Length of Rectangle : ");
scanf("%f",&l);
printf("\n Enter the Base of rectangle : ");
scanf("%f",&b);


P=2*(l+b);
A=l*b ;

printf("\n\n\t The Perimeter of rectangle is : %f",P);
printf("\n\n\t The Area of rectangle is : %f",A);

getch();
return 0;
}
