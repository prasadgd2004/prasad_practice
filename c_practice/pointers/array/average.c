#include <stdio.h>
float average(int *ptr)
{
	for (int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);

	}
	int sum=0;
	for (int i=0;i<5;i++)
	{
		sum+=*(ptr+i);
	}
	int avg=sum/5;
	return avg;
}
int main()
{
	int arr[5];
	int *ptr=arr;
	float avga= average(arr);
	printf("%f",avga);

	return 0;
}
