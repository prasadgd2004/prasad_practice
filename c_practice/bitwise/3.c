#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the values:");
	scanf("%d %d",&a,&b);
	int n=a & b;
	int m=a|b;
	int p=a^b;
	printf("and operation:%d\n",n);
	printf("or operation:%d\n",m);
	printf("xor operation: %d\n",p);
	return 0;
}
