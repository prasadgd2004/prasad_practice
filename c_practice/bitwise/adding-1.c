#include<stdio.h>
int main()
{
	int n;
	printf("enter the element");
	scanf("%d",&n);
	int m;
	printf("enter the next element\n");
	scanf("%d",&m);
	while(n&m)
	{
		n=n^m;
		m=m<<1;
	}
	n=n^m;
	printf("adding one element:%d\n",n);
	return 0;
}

