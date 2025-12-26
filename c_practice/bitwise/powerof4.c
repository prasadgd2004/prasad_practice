#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n>0 && ((n&(n-1))==0) && (n%3==1))
	{
		printf(" power of 4");
	
	} 
	else 
	{
		printf("is not power of 4");

	}
	
	return 0;
}
