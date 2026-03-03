#include<stdio.h>
int main()
{
	int n,count=0,count1=0;
	printf("enter the number");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
		else
		{
			count1++;
		}

	}
	printf("even:%d\n",count);
	printf("odd:%d",count1);
	return 0;
}

