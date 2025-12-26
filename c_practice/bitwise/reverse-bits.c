#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int rev=0;
	for(int i=0;i<4;i++)
	{
		
		rev=(rev<<1) | (n&1);
		n=n>>1;
	}
	printf("reverse bits:%d",rev);
	return 0;
}

