/*
Name : Sabin koju
Roll No :
Subject : Programming Fundamental
Lab no : 22
Program : WAP to find fibonacci series using recurssion function.
DAte : 24 jan 2017
*/
#include<stdio.h>
int fibo(int i);
int main()
{
	int i;
	
	for(i=0;i<=10;i++)
	{
	printf("\n The fibonacci series is %d",fibo(i));

    }


return 0;

}
int fibo(int i)
{
	if (i==0)
	return 0;
	if(i==1)
	return 1;
	return fibo(i-1)+fibo(i-2);
}
	
	
