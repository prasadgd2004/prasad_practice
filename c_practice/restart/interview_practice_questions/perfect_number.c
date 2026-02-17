#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number");
	scanf("%d",&n);

	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("is perfect number");
	}
	else
	{
		printf("is not perfect number");
	}
	return 0;
}
