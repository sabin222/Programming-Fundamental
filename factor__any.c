/*
Name : Sabin koju
Roll:
Subject : Programming Fundamental
Lab :08
Program : Write a c program to print factorial of any number provided by user using do and while loop.
Date : 26 oct,2016
*/

#include<stdio.h>

int main()

{
int n,factorial=1;
printf("\n Write any number :");
scanf("%d",&n);

do
{
	factorial*=n;
	n--;
	
}
while (n!=0);
printf("\n Factor of Given number :%d\n \n",factorial);

return 0;

}
