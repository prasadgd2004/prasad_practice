#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);

        }
	int e=0,o=0;
	int even[10],odd[10];
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[e]=arr[i];
			e++;
		}
		else
		{
			odd[o]=arr[i];
			o++;
		}

	}
	for(int i=0;i<e-1;i++)
        {
                for(int j=0;j<e-1-i;j++)
                {
                        if(even[j]>even[j+1])
                        {
                                int temp=even[j];
                                even[j]=even[j+1];
                                even[j+1]=temp;

                        }

                }
        }
	for(int i=0;i<o-1;i++)
        {
                for(int j=0;j<o-1-i;j++)
                {
                        if(odd[j]>odd[j+1])
                        {
                                int temp=odd[j];
                                odd[j]=odd[j+1];
                                odd[j+1]=temp;

                        }

                }
        }


	printf("even array\n");
	for(int i=0;i<e;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n odd array ");
	for(int i=0;i<o;i++)
	{
		printf("%d ",odd[i]);
	}
	printf("\n");
	return 0;
}




