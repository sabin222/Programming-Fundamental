/*
Student Name : Sabin koju
Subject : Programming Fundamentals
Roll No : 
Program : WAP to declare array of 10 elements and search element to print whether exist or nor. 
Lab Sheet No : 23
Date : 30 Jan 2017
*/


#include<stdio.h>
int main()
{int i,array[10],j,a;
for(i=0;i<10;i++)
{
   printf("\n Enter arraY %d  :  ",i+1);
   scanf("%d",&array[i]);
}
printf("\n The array in assending order are as follow.\n");
    
    for (i = 0; i < 10; ++i)

    {
        for (j = i + 1; j < 10; ++j)

        {

            if (array[i] > array[j])

            {

                a =  array[i];

                array[i] = array[j];

                array[j] = a;

            }

        }
	}

   

    printf("The numbers arranged in ascending order are given below \n");

    for (i = 0; i < 10; ++i)

        printf("%d\n", array[i]);

}
