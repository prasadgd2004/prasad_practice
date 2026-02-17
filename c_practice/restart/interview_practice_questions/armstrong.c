#include<stdio.h>
int main()
{
	int n,temp,count=0,sum=0,digit;
	printf("enter the number");
	scanf("%d",&n); 
	temp=n;
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp>0)
	{
		digit=temp%10;
		int fact=1;
		for(int i=1;i<=count;i++)
		{
			fact =fact*digit;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("is armstrong number");
	}
	else
	{
		printf("is not armstrong number");
	}
	return 0;
}




































