#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	printf("enter the values:");
	scanf("%d %d",&a,&b);

	int max= (a + b +abs(a - b))/2;
	int min= (a + b -abs(a - b))/2;
	printf("maximum :%d\n",max);
	printf("minimum :%d\n",min);
	return 0;
}

