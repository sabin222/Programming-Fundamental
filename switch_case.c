/*
Name : Sabin Koju
Roll : 28
Subject : Programming fundamental
Lab No :15
Program : WAP to Switch case.
Date : 28 Dec 2016
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{

char c;
int a,i,b;
printf("\n Enter 1 to check 0dd/even.");
printf("\n Enter 2 to check prime or not.");
printf("\n Enter 3 to check vowel or constant.");
printf("\n Enter 4 to check alphabet or not.");
printf("\n Enter 5 to check divisible by 5 & 11.");


printf("\n Enter any character:");
scanf("%c",&c);

printf("\n Choose Above number to do work : ");
scanf("%d",&a);



switch (a)
{
case 1:
b=c;
if (b%2==0)
{
	printf("\n %d is even.",b);
}
else 
    printf("\n %d is odd.",b);
 break;
 
case 2:
b=c;
for (i=0;i<b;i++)
if (b%i==0)
printf("\n Number %d is prime",b);
else
printf("\n Number %d is not prime",b);
break;

case 3:
if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
printf("\n Given character is vowel.");
else
printf("\n Given character is constant.");
break;

case 4:
b=c;
if((b>=65 && b<=90) || (b>=97 && b<=122))
printf("\n The given character is alphabet ");
else
printf("\n The given character is not alphabet ");
break;

case 5:
b=c;
if (b%5==0 && b%11==0)
printf("\n The given number is divisible. ");
else
printf("\n The given number is not divisible. ");
break;

case 6:
exit(0);
break;

default:
printf("\n Number is invalid");
printf("\n Thank You for Using. ");

return 0;
}
}










