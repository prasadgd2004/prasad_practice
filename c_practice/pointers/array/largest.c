#include<stdio.h>
int main()
{
	int arr[5]={7,2,5,2,1};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			   int temp=arr[j];
			   arr[j]=arr[j+1];
			   arr[j+1]=temp;
			}
		}
	
	}
	
	
		printf("%d",arr[5-2]);
	
	return 0;
}
					
					
