#include <stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5];
	int *ptr1=arr1;
	int *ptr2=arr2;
	for (int i=0;i<5;i++)
	{
		*(ptr2+i)=*(ptr1+i);
	}
	printf("copying elements :\n");
	for (int i=0;i<5;i++)
	{
		printf("%d ",*(ptr2+i));
	}
	return 0;
}

