#include<stdio.h>
int main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	int num=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*i-1;j++)
		{
			if(i==j)
			{
				printf("%d",num++);
			}
			else
			{
				printf("*");
			}

		}
		printf("\n");
	}
	return 0;
}
