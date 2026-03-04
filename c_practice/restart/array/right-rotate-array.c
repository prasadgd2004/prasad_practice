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
	int rot;
        printf("enter the number");
        scanf("%d",&rot);
	for(int i=0;i<rot;i++)
	{
		int temp=arr[n-1];
		for(int j=n-1;j>=1;j--)
		{
			arr[j]=arr[j-1];

		}
		arr[0]=temp;

	}
	printf(" after right rotation\n");
	for(int j=0;j<n;j++)
	{
		printf(" %d",arr[j]);
	}
	return 0;
}

