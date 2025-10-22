#include<stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}
