#include<stdio.h>
int main()
{
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int ch = 64+n;
		for(int j=n;j>=i;j--)
		{
			printf("%c",ch--);
		}
		printf("\n");
	}
	return 0;
}
