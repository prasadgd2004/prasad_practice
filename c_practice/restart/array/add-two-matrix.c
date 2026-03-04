#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the rows and columuns\n");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c];
	printf("enter the elements of first matrices\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
	printf("enter the elements of second matrice\n");
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        scanf("%d",&b[i][j]);
                }

        }
	 int sum[r][c];
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        sum[i][j]=a[i][j]+b[i][j];
                }
	}
	printf("after add two matrices\n");
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        printf("%d ",sum[i][j]);
                }
        }
	printf("\n");
	return 0;
}




	
