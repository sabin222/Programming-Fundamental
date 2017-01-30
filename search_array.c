/*
Student Name : Sabin koju
Subject : Programming Fundamentals
Roll No : 
Program : WAP to declare array of 10 elements and search element to print whether exist or nor. 
Lab Sheet No : 23
Date : 30 Jan 2017
*/


#include<stdio.h>
int main()
{
int i,array[10],b;
for(i=0;i<10;i++)
{
   printf("\n Enter arraY %d  :  ",i+1);
   scanf("%d",&array[i]);
}
   printf("\n Enter the number of array to search : ");
   scanf("%d",&b);
   i = 0;
   while (i < 10 && b != array[i])
    {
      i++;
   }
   
   if (i < 10) {
      printf("Number found at the location = %d", i + 1);
   } else {
      printf("Number not found");
   }
   return 0;
}
