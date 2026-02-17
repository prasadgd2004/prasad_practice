#include<stdio.h>
int main()
{
	int N=102301;
	int ans=0,place=1;
	while(N!=0)
	{
		int digit=N%10;

		if(digit==0)
		{
			digit=1;
		}
		ans= ans+digit*place;
		place=place*10;
		N=N/10;
	}
	printf("%d",ans);
	return 0;
}
