#include<stdio.h>
int main()
{
	int arr[5]={5,4,3,2,1};
	int *ptr=arr;
	int *ptr1=&arr[3];
	if(*ptr>*ptr1)
	{
		printf("ptr comes before ptr1\n");
	}
	else
	{
		printf("ptr comes after ptr1\n");
	}

	return 0;
}
