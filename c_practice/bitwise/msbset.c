#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the number");
	scanf("%d",&n);
	result=n|(n+1);
	printf("msb set:%d",result);
	return 0;
}
