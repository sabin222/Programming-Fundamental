/*
Name : Sabin Koju
Roll : 12
Subject : programming fundamental
Lab No : 07
Program :WAP to print result,average, percentage and total.
Date : 25 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
float a,b,c,d,e,F,g,total,average,percentage;

printf("\n Enter marks of computer Architecture : ");
scanf("%f",&a);
 printf("\n Enter marks of algebra Math : ");
scanf("%f",&b);
printf("\n Enter marks of discrete Math : ");
scanf("%f",&c);
printf("\n Enter marks of programming Fundamental : ");
scanf("%f",&d);
printf("\n Enter marks of interactive Skills : ");
scanf("%f",&e);
printf("\n Enter marks of business Organization : ");
scanf("%f",&F);
printf("\n Enter marks of software Engineering : ");
scanf("%f",&g);

total=(a+b+c+d+e+F+g);
average=((a+b+c+d+e+F+g)/7);
percentage=(total/7);

printf("\n\n\t The total marks is : %f",total);
printf("\n\n\t The average marks is : %f",average);
printf("\n\n\t Your percentage is : %f",percentage);
getch();
return 0;
}


