#include<stdio.h>
int main()
{
	int n;
        printf("enter the number");
        scanf("%d",&n);
        int arr1[n];
        printf("enter the elements");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr1[i]);

        }
	int arr2[n];
        printf("enter the elements");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr2[i]);

        }
	int arr3[10];

	for(int i=0;i<n;i++)
	{

		arr3[i]=arr1[i];

	}
	for(int i=0;i<n;i++)
        {

                arr3[n+i]=arr2[i];

        }


	printf("after copying elements\n");
	for(int i=0;i<10;i++)
	{
		printf("%d",arr3[i]);
	}


	return 0;
}

