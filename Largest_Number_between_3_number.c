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

printf("\n\t\t ++++++=====+++++");
if (a>b&&a>c)
{
    printf("\n\n\n\n\t -->> A is The Largest Number. <<-- ");
}
 else if(b>c&&b>a)
{
     printf("\n\n\n\n\t -->> B is The Largest Number. <<--");
}
else{
    printf("\n\n\n\n\t -->> C is largest Number. <<--");
}
getch();
return 0;
}
