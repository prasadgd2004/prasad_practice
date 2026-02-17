#include<stdio.h>
int main()
{
	int N=11000;
	int ans=0,a=1;
	while(N!=0)
	{
		ans=ans+(N%10)*a;
		N=N/10;
		a=a*2;
	}
	printf("%d",ans);
	return 0;
}
