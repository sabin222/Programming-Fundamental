/*
Student Name : Sabin koju 
Subject : Programming Fundamental
Lab No. : 07
Program : Write a C program to print largest numbers among three using terniary operator. 
roll:			
Date : 24 oct,2016
*/

#include<stdio.h>
	
int main()
{
int a,b,c;
printf("\n Enter first number :");
scanf("%d",&a);
printf("\n Enter second number :");
scanf("%d",&b);
printf("\n Enter Third number :");
scanf("%d",&c);

(a>=b&&a>=c)? printf("\n a is largest"):
(b>=a&&b>=c)? printf("\n b is largest"):
printf("\n c is largest");
return 0;
}
