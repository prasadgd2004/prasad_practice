#include <stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("multiplication of number %d:\n",num);
	for (int i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}


