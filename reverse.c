/* 
Name : SAbin Koju
Roll :
LAb No : 21
subject : programming fundamental
Program : WAP to find reverse using function.
Date : 22 jan 2017
*/

#include<stdio.h>
void reverse();
  int main()
  {
reverse();
return 0;
}
void reverse()
{
	int n,rev=0;
	printf("ENter any number to find reverse: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=rev*10;
		rev=rev + n%10;
		n=n/10;
	}
	printf("revers of entered number is %d",rev);
	
}
