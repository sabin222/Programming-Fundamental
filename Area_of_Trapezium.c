/*
Name : Sabin Koju
Subject : Programming fundamental
Roll :12
Program : WPA to print area of trapezium.
Lab No : 04
Date : 21 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
float a,b,h,A;
printf("\n Enter the first side of trapezium : ");
scanf("%f",&a);
printf("\n Enter the second side of trapezium : ");
scanf("%f",&b);
printf("\n Enter the Height of trapezium : ");
scanf("%f",&h);

A=((a+b)*h)/2;
printf("\n\n\t The Area of Trapezium is : %f",A);

getch();
return 0;
}
