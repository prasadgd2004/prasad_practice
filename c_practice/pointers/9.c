#include <stdio.h>
int main()
{
	int arr[10]={20,30,45,55,78,98,27,85,65,10};
	int *ptr=arr;
	int max=*ptr;
	int min=*ptr;
	int len;
	for (int i=0;i<10;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
		}
		 if( len=sizeof (arr)/sizeof(arr[0]))
			 break;
		 
	}
	printf("maximum:%d\n ",max);
	printf("minimum:%d\n ",min);
	//int len=sizeof (arr)/sizeof(arr[0]);
	printf("length of array:%d\n",len);
	return 0;
	}
