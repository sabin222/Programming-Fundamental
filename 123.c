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
int i,j,n;
printf("\n Enter any number : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
	
   printf("%d",j);
}
printf("\n");
}
return 0;
}
