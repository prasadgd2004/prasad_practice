#include<stdio.h>
int main()
{
	int arr[5]={1,4,7,8,9};
	int *ptr=arr;
	int even=0,odd=0;
	for (int i=0;i<5;i++)
	{
		if(*(ptr+i)%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		
	}
	printf("even numbers:%d\n",even);
	printf("odd numbers:%d\n",odd);
	return 0;
}

