#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	int m;
	printf("enter the number");
	scanf("%d",&m);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			flag=1;
		}

	}
	if(flag==1)
	{
		printf("element is found");
	}
	else
	{
		printf("element is not found");
	}
	return 0;
}

