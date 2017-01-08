/*
Name: Sabin Koju
Roll:
Subject : Programming fundamental
Lab sheet: 15
Program : WAP  to print all natural numbers in reverse from 1 to n using while loop.
Date : 8 jan 2017
*/

#include<stdio.h>
int main()
{
int a;
printf("\n Enter any number: ");
scanf("%d",&a);
while(a>0)
{
 printf("\n %d ",a--);
}
return 0;
}
