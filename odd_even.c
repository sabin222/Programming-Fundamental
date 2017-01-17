/*
Name : Sabin Koju
Roll :
Subject : Programming fundamental
Lab No : 19
Program : WAP to find diameter,circumference and area of circle.
Date : 17 jan 2017
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int odd(int a);
int main()
{
	int a;
	printf("\n Enter first number :");
	scanf("%d",&a);	
	odd(a);
	return 0;
}
int odd(int a)
{	

if(a%2==0)

printf("\n The number %d is even.",a);

else

printf("\n The number %d is odd.",a);
return 0;
}	
