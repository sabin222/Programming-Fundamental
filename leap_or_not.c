/*
Name: Sabin Koju
Roll:
Subject : Programming fundamental
Lab sheet: 15
Program : WAP  to check whether year is leap year or not using conditional/ternary operator.
Date : 8 jan 2017
*/

#include<stdio.h>
int main()
{
int l;
printf("\n Enter The year : ");
scanf("%d",&l);

(l%4==0)? printf("\n The year is leap."):(l%400==0)?printf("\n the year is leap year."):(l%100!=0)?printf("\n not leap year."):printf("\n leap year.");

return 0;

} 
