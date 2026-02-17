#include<stdio.h>
int main()
{
	int n,limit,sum;
	printf("enter the limit:");
	scanf("%d",&limit);
	printf("Perfect numbers are in %d is\n",limit);
	for(int n=1;n<=limit;n++)
	{	sum=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}

		}
	
	if(sum==n)
	{
		printf("%d\n",n);
		
	}
	}
	return 0;
}
