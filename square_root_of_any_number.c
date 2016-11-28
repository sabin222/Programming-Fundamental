/*
Name : Sabin Koju
Roll : 12
Subject : programming fundamental
Lab No : 07
Program :WAP to enter any number and calculate its square root.
Date : 25 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
float a,s;
printf("\n Enter any number : ");
scanf("%f",&a);
s = (sqrt(a));
printf("\n\n\t Square root of Given number is : %.2f",s);

getch();
return 0;
}
