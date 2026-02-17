#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	if(a^b==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("both are not equal");
	}
	return 0;
}
