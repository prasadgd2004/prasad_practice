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
	int pos;
	printf("enter the position");
	scanf("%d",&pos);
	int v;
	printf("enter the value");
	scanf("%d",&v);
	for(int i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=v;
	n++;
	printf("after insert the element in array\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


