/*
Student Name : Sabin koju
Subject : Programming Fundamentals
Roll No : 
Program : WAP to declare and print 5*2 multi dimensional array. 
Lab Sheet No : 23
Date : 30 Jan 2017
*/


#include<stdio.h>
int main()
{
int i,array[5][2],j;
for(i=0;i<5;i++)
 {
   for(j=0;j<2;j++)
     {
         printf("\n Enter arraY %d :  ",i+1);
         scanf("%d",&array[i][j]);
     }
}
for(i=0;i<5;i++)
 {
   for(j=0;j<2;j++)
     {
         printf("\t %d ",array[i][j]);
     }
     printf("\n");
}

return 0;
}
