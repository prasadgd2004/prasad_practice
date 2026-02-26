#include<stdio.h>
int main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int v=1;
		for(int j=1;j<=i;j++)
		{
			printf("%d",v);
			v=v*(i-j)/j;
		}
		printf("\n");
	}
	return 0;
}

