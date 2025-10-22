#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
	return 0;
}
