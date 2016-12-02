/*
Name : Sabin Koju
Subject : Programming fundamental
Roll : 28
Lab sheet No : 09
Program : WAP to demonstrate the working of increment and decrement operators.
Date : 16 Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,post,pre;

printf("\n Enter any number : ");
scanf("%d",&a);

post=a++;
pre=++a;
 printf("\n\n\t The Post increment is : %d",post);
printf("\n\t The Pre increment is : %d",pre);

post=a--;
pre=--a;

 printf("\n\n\t The Post decrement is : %d",post);
printf("\n\t The Pre decrement is : %d",pre);
getch();
return 0;
}
