/*
Name: Sabin Koju
Roll:
Subject : Programming fundamental
Lab sheet: 15
Program : WAP  to print all natural numbers from 1 to n using while loop.
Date : 8 jan 2017
*/

#include<stdio.h>
int main()
{
int a,i=1;
printf("\n Enter any number: ");
scanf("%d",&a);
while(i<=a)
{
 printf("\n %d ",i++);
}
return 0;
}
