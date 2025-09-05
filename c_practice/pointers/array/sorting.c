#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	for (int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n-1;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				int temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
	return 0;
}
