#include <stdio.h>
int main()
{
	int arr[5]={20,50,70,30,10};
	int *ptr=arr;
	int max=*ptr;
	int min=*ptr;
	for (int i=0;i<5;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
	}
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
	return 0;
}
