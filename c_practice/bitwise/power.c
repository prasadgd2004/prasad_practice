#include <stdio.h>

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0 && (n&(n-1))==0)
	{
		printf("%d is a power of two :\n",n);
	}
	else
	{
		printf("%d is not a power of two: \n",n);
	}
	return 0;
}
