/*
Name :sabin koju
Roll:
Subject : Programming fundamental
Lab No : 20
Program : WAP to print Fibonacci Series up TO N terms.
Date : 19 jan 2017
*/
 #include<stdio.h>

void fibo(int n);
 int main()
 {
	 
	 int n;
	 
	printf("\n Enter the end of fibonacci series : ");
	scanf("%d",&n);
	 
	fibo(n);
	 return 0;
}
void fibo(int n)
{
	int first=0,second=1,sum,i;
	printf("\n fibonacci series is \t %d %d",first,second);
	for(i=2;i<n;i++)
	{
	sum=first+second;
	printf("10 %d",sum);
    first=second;
	second=sum;
	

    }
}
 
