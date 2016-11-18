/*
Name : Sabin koju
Roll : 12
Subject : Programming fundamental
Lab No : 03
program : WAP to print simple interest input taken from user.
Date : 18 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
float p,r,t,I;
printf("\n Enter the Amount of principle : RS. ");
scanf("%f",&p);
printf("\n Enter the Rate of interest : ");
scanf("%f",&r);
printf("\n Enter the number of Time : yrs. ");
scanf("%f",&t);

I=(p*t*r)/100;
printf("\n\n The amount of Simple Interest is : %f",I);

getch();
return 0;
}
