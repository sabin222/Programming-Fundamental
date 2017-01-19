/*
Name :sabin koju
Roll:
Subject : Programming fundamental
Lab No : 20
Program : WAP to print factorial using function.
Date : 19 jan 2017
*/
 #include<stdio.h>
 void func();
 int main()
 {
 

 func();
}
void func()
{
	int factorial,i,a;
	 printf("\n Enter the number to find its factorial : ");
 scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	factorial=factorial*i;
    

    }
    
   	printf("%d ",factorial);
    
}
	
