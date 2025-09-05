#include <stdio.h>
int main()
{
	int arr[5]={-1,-2,3,1,2};
	int *ptr=arr;
	int pos=0,neg=0;
	for(int i=0;i<5;i++)
	{
		if(*(ptr+i)>0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
	}
	printf("positive numbers:%d\n",pos);
	printf("negative numbers:%d\n",neg);
	return 0;
}

