#include <stdio.h>
int main()
{
	int arr[5]={1,2,3,2,5};
	int *ptr=arr;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(*(ptr+i)==*(ptr+j))
			{
				printf("%d",*(ptr+i));
			}
		}
		 
	}
	return 0;
}

