#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					count++;
					arr[k]=arr[k+1];
				}
				n--;
				j--;

			}
		}
	
	}
	printf("after deleting duplicate elemnts\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n count duplicate elements:%d",count);

	return 0;
}
	  
