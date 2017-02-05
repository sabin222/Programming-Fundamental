/*
Student name : Sabin koju
roll No : 26
Subject : Programming fundamental
Lab sheet no : 28
Program : WAP to demonstrate the use of Array and pointer.
Date : 5 feb,2017
*/

#include<stdio.h>

int main()
{
int array[10]={23,4,5,1,21,56,98,20,11,77},i;
int *p[10];
for(i=0;i<10;i++)
   {  
	   p[i] =&array[i];
   }
for(i=0;i<10;i++)
   {
	   printf("\n The array are -> %d  ",array[i]);
   }
   for(i=0;i<10;i++)
   {
   printf("\n Address of array are %u ",&p[i]);
   }
   return 0;
}
