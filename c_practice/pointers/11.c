#include <stdio.h>
float average(int*arr,int size)
{
	int sum =0;
	for (int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return (float)sum/size;
}
int main()
{
	int arr[]={20,40,60,80,100};
	int size=sizeof (arr)/sizeof (arr[0]);
	float avg=average(arr,size);
	printf("average of array elements:%f\n",avg);
	return 0;
}



