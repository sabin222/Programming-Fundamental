/*
Name : Sabin koju
Roll No :
Subject : Programming Fundamental
Lab no : 22
Program : WAP to find factorial of given number using recurssion function.
DAte : 24 jan 2017
*/
#include<stdio.h>
int fac(int n);
int main()
{
	int n,num;
	printf("\n Enter any number :");
	scanf("%d",&num);
   n=fac(num);
printf("\n The factorial of %d is %d",num,n);
return 0;

}
int fac(int n)
{
  
	if (n==1)
	return 1;
	
	else 
	 return (n*fac(n-1));
	 
 }
	
