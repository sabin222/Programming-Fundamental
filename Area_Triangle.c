/*
Name : Sabin Koju
Subject : Programming fundamental
Roll :12
Program : WPA to print area of triangle.
Lab No : 04
Date : 21 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
float a,b,c,A,s;
printf("\n Enter the first side of Triangle : ");
scanf("%f",&a);
printf("\n Enter the second side of Triangle : ");
scanf("%f",&b);
printf("\n Enter the Third side of Triangle : ");
scanf("%f",&c);
s=(a+b+c)/2;
A= sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n\n\t The Semi-Perimeter of Triangle is : %f",s);
printf("\n\n\t The Area of Triangle is : %f",A);

getch();
return 0;
}
