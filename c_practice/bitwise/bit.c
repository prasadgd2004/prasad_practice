#include <stdio.h>
int main()
{
	int a,b,n;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	n=a;
	a=b;
	b=n;
	printf("swaping the number: %d %d\n",a,b);
	return 0;
}

