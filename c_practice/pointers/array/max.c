#include <stdio.h>
int main()
{
	int arr[5]={10,20,80,5,30};
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

