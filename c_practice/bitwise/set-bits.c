#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		if((n&1)==0)
		{
			printf("%d",n);

		}
		n=n>>1;
	}
	return 0;
}
