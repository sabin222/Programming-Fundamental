/*
Name : Sabin Koju
Roll :
Subject : Programming fundamental
Lab No : 19
Program : WAP toi find the cube of any number.
Date : 17 jan 2017
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 void cube();
int main()
{
cube();
return 0;
}

void cube()
{
	int a,b;
printf(" Enter any number: ");
scanf("%d",&a);
b=pow(a,3);
printf(" The cube is : %d",b);
}

 
