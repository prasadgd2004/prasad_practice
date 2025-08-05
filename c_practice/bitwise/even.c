#include <stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num & 1)
	{
	
		printf("odd :%d\n",num);
	}
	
	else{
	
		printf("even :%d\n",num);
	}

	return 0;
}

