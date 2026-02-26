#include<stdio.h>
int main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		int num=i;

		for(int j=1;j<2*i;j++)
		{
			if(j<i)
			{
				printf("%d",num--);
			}
			else
			{
				printf("%d",num++);
			}

		}
		printf("\n");
	}
	return 0;
}

