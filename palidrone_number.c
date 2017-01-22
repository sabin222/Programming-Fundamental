/* 
Name : SAbin Koju
Roll :
LAb No : 21
subject : programming fundamental
Program : WAP to find palindrome using function.
Date : 22 jan 2017
*/

#include<stdio.h>
void palidrone();
  int main()
  {
palidrone();
return 0;
}
void palidrone()
{
	int n,rev=0,temp;
	printf("ENter any number to find reverse: ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev + temp%10;
		temp=temp/10;

	}
	
	if(n==rev)
	{
	printf("\n the number is palidrone");
    }
	else 
	{
	printf("Not Palidrone.");
}
	
}

