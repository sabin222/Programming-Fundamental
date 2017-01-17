/*
Name : Sabin Koju
Roll :
Subject : Programming fundamental
Lab No : 19
Program : WAP toi find diameter,circumference and area of circle.
Date : 17 jan 2017
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void diameter(int a);
void circumference(int a);
void area(int a);
int main()
{
	int a;
printf(" Enter radius of circle: ");
scanf("%d",&a);	
diameter(a);
circumference(a);
area(a);
return 0;
}
void diameter(int a)
{
	int b;
	b=(2*a);
printf(" \n The diameter of circle is : %d",b);
}
void circumference(int a)
{
   int c;
   c=(2*3.14*a);
   printf(" \n The circumference of circle is : %d",c);
}
void area(int a)
{
	int d;

d=(3.14*(pow(a,2)));
printf(" \n The Area of circle is : %d",d);

}

 
