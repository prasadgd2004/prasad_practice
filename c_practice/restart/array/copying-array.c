#include<stdio.h>
int main()
{

	int arr[10]={1,2,3,4,5};
	int arr1[5]={6,7,8,9,10};

	for(int i=0;i<5;i++)
	{

		arr[5+i]=arr1[i];

	}
	printf("after copying elements\n");
	for(int i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}


	return 0;
}

