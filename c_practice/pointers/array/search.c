#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5};
	int *ptr=arr;
	int x;
	scanf("%d",&x);
	for (int i=0;i<5;i++)
	{
		if(*(ptr+i)==x)
		{
			printf("present in these loop :%d",x);
		}
	}
	return 0;
}

