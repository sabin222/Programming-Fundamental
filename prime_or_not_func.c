/* 
Name : SAbin Koju
Roll :
LAb No : 21
subject : programming fundamental
Program : WAP to check  prime or not using function.
Date : 22 jan 2017
*/

#include<stdio.h>
int prime(int a);
  int main()
  {
	  int a,result;
	 
	  printf("\n Enter any number: ");
      scanf("%d",&a);
      result=prime(a);
	  if (result==1)
      printf("\n The number is  prime.");
      else
	  printf("\n The number is not prime.");
  
  return 0;
  }
  int prime(int a)
  {
  int i,count=0;
  
  for(i=1;i<=a;i++)
  {
	  if (a%i==0)
	  count++;
	    
      
  }
  if (count==2)
	  return (1);
  else
	  return (0);
  }
