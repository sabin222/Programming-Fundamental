/*
 Student name : Sabin Koju
 Subject : programming fundamental
 Roll no : --
 Lab sheet no : 18
 Program : WAP to display the following output.
 Date : 15 jan,2017
 */

#include<stdio.h>

int main (){
int i,j;

for(i=1;i<=5;i++)

	{
	for(j=1;j<=5;j++)
	   {
		   if(j>=i)
		printf("*");
		   else 
		printf(" ");
	   }
	printf("\n");
}
return 0;
}
