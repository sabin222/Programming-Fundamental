/*
Name : Sabin Koju
Roll : 12
Subject : programming fundamental
Lab No : 06
Program :WAP to print Arithmetic operation.
Date : 25 Nov 2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (){
int A,B,sum,sub,multi,divi,modulus;
printf("\n\n\t Enter the first Number : ");
scanf("%d",&A);
printf("\n\t Enter the Second Number : ");
scanf("%d",&B);

sum=A+B;
sub=A-B;
multi=A*B;
divi=A/B;
modulus=A%B;

printf("\n\n\t\t The SUM of two Number is : %d",sum);
printf("\n\t\t The SUBTRACTION of two Number is : %d",sub);
printf("\n\t\t The MULTIPICATION of two Number is : %d",multi);
printf("\n\t\t The DIVISION of two Number is : %d",divi);
printf("\n\t\t The MODULUS of two Number is : %d",modulus);

getch();
return 0;
}
