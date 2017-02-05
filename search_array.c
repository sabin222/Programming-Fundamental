/*
Student name : Sabin koju
roll No : 26
Subject : Programming fundamental
Lab sheet no : 28
Program : WAP to declare array of 10 elements and check whether it exist or not.
Date : 5 feb,2017
*/

#include<stdio.h>

int main()
{
int array[10]={23,4,5,1,21,56,98,20,11,77},a,i,n;


   printf("\n Enter The number to search : ");
   scanf("%d",&a);
   for(i=0;i<10;i++)
   {
      if(a==array[i])
      {
         n=1;
         break;
      }
   }
   if(n==1)
      printf("\n exists.");
   else
      printf("\n Doesnot exists.");
 
  return 0;
}
