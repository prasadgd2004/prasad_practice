#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("enter the number");
	scanf("%d",&n);
	int temp=n;
	while(temp>0)
	{
		digit=temp%10;
		int fact=1;
		for(int i=1;i<=digit;i++)
		{
			fact=fact*i;

		}
		sum =sum+fact;
		 temp=temp/10;
	}
	if(sum==n)
	{
		printf("is strong number");

	}
	else
	{
		printf("is not strong number");
	}
	return 0;
}

