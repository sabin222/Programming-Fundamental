/*
Name : Sabin koju
Roll : 28
Subject : Programming fundamental
Lab no : 10
program : WAP to check largest Number among Three number.
Date : 07 Dec 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b,c;
printf("\n Enter First Number : ");
scanf("%d",&a);
printf("\n Enter Second Number : ");
scanf("%d",&b);
printf("\n Enter Third Number : ");
scanf("%d",&c);

(a>b&&a>c)? printf("\n\n\t A is Largest."):
(b>c&&b>a)?printf("\n\n\t B is Largest."):printf("\n\n\t C is Largest.");

    return 0;
}
