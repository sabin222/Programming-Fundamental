/*
Name : Sabin koju
Roll : 28
Subject : Programming fundamental
Lab no : 10
program : WAP to check odd and even Number.
Date : 07 Dec 2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b;
printf("\n Enter Any Number : ");
scanf("%d",&a);

(a%2==0)? printf("\n %d is Even.",a):
    printf("\n %d is Odd.",a);
    getch();
    return 0;
}
