/*
 Student name : Sabin Koju
 Subject : programming fundamental
 Roll no : --
 Lab sheet no : 18
 Program : WAP to display the following output.
            1
           12
          123
         1234
        12345 
 Date : 15 jan,2017
 */

#include<stdio.h>

int main (){
int i,j,k;

for(i=1;i<=5;i++)

	{
	for(j=5;j>=i;j--)
	   {
		 printf(" "); 
	   }
	   
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	}
	printf("\n");
}
return 0;
}
