/*
Name : Sabin Koju
Subject : Programming fundamental
Roll :12
Program : WPA to print area and volume of sphere.
Lab No : 04
Date : 21 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
float r,V,A,PI=3.14;
printf("\n Enter The Radius of the Sphere :  ");
scanf("%f",&r);

A=4*PI*(pow(r,2));
V=1.33*PI*(pow(r,3));

printf("\n\n\t The Volume of Sphere is : %f",V);
printf("\n\n\t The Area of Sphere is : %f",A);

getch();
return 0;
}
