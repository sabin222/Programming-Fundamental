/*
Name: Sabin koju
Roll:
Subject: Programming fundamental
Lab no:08
Program: Write a program to print sum of ten numbers.
Date:25 oct,2016
*/

#include<stdio.h>

int main()
{
int n,sum=0;

printf("\n Enter the number:");
scanf("%d",&n);

do{
	sum=sum+n;
	n--;
}
while (n>0);
printf("\n Result = %d",sum);
return 0;
}



