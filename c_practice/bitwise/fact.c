#include <stdio.h>
int multiply(int a,int b)
{
	int result=0;
	while(b>0)
	{
		if (b&1)
		{
			result =result +a;
		}
		a=a<<1;
		b=b>>1;
	}
	return result;
	
}

int main()
{
	int n,i ,fact=1;
	printf("enter the non negative number:");
	scanf("%d",&n);

	if(n<0)
	{
		printf("factorial is not defined for negative number:\n");
		return 1;
	}
	for (i=2;i<=n;i++)
	{
		fact =multiply(fact,i);
	}
	printf("factorial of %d is %d\n",n,fact);
	return 0;
}
	


