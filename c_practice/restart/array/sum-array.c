#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("sum of  elements\n");
	int sum=0;
        for(int i=0;i<n;i++)
        {
                if(arr[i]>0)
                {
                        sum =sum+arr[i];
                }

        }
	printf("%d",sum);

        return 0;
}

