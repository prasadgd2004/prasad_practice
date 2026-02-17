#include<stdio.h>
int main()
{
	int a,b,lcm,gcd,x,y;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(y!=0)
	{
		int temp=y;
		y=x%y;
		x=temp;
	}
	gcd=x;
	lcm=(a*b)/gcd;
	printf("gcd:%d\n",gcd);
	printf("lcm:%d\n",lcm);
	return 0;
}

