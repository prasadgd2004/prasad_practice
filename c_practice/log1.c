#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	printf("number is not positive :%d\n",!(a>0));
	return 0;
}
