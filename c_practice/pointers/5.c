#include <stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr=arr;
	int i;
	int sum=0;
	for( i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
		sum +=*(ptr+i);
	}
	
	printf("%d\n",sum);
	return 0;
}
	
