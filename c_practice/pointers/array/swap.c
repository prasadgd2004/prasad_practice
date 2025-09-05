#include<stdio.h>
int main()
{
	int arr1[6]={1,2,3,4,5,6};
	int n=6;
	int arr2[n/2];
	int *ptr1=arr1;
	int *ptr2=arr2;
	for (int i=0;i<n/2;i++)
	{
		*(ptr2+i)=*(ptr1+i);
	}
	for (int i=0;i<n/2;i++)
	{
		*(ptr1+i)=*(ptr1+i+n/2);
	}
	for(int i=0;i<n/2;i++)
	{
		*(ptr1+i+n/2)=*(ptr2+i);
	}
	for(int i=0;i<6;i++)
	{
		printf("%d ",*(ptr1+i));
	}
	printf("\n");
	return 0;
}

