#include<stdio.h>
int main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1||i==n||i==j)
			{
				printf("*");
			}
			else
			{
				printf(" ");

			}

		}
		printf("\n");
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++)
		{
			if(j==1 || i+j==n+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");

	}
	return 0;
}
