#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("negative elements\n");
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			count++;
			printf(" %d",arr[i]);
		}

	}
	printf("\ncount negative:%d",count);

	return 0;
}

