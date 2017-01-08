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
    
    if(l%4==0 || l%400==0)
    {
    if(l%100!=0)
	
		printf("\n The year is leap year.");
	
	else 
     printf("\n The year is not leap year.");
        
	}
	 else
   printf("\n The year is Not Leap year.");
  
return 0;
}
