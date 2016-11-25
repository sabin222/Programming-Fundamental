/*
Name : Sabin Koju
Roll : 12
Subject : programming fundamental
Lab No : 06
Program :WAP to calculate compound interest.
Date : 25 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (){
float P,T,R,CI;

printf("\n Enter the amount of principle : ");
scanf("%f",&P);
printf("\n Enter the Time period : ");
scanf("%f",&T);
printf("\n Enter the Rate of interest : ");
scanf("%f",&R);

CI=((P*pow(1+(R/100),T)-1));

printf("\n\t The amount of compound interest is : %f",CI);
getch();
return 0;
}
