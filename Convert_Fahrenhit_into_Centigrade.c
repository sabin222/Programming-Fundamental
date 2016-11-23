/*
Name : Sabin Koju
Subject : Programming fundamental
Lab No : 01
Program : Write a program to read temperature in fahrenhit and convert it into centigrade.
Date :14 Nov 2016
Roll:
*/

#include<stdio.h>


int main ()
{
float c,F;
printf("\n Enter the Temperature in fahrenhit : ");
scanf("%f",&F);

c=(0.56*(F-32));

printf("\n\n The Temperature in Centigrade is -->> %f",c);

return 0;
}
