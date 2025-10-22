#include <stdio.h>
int main()
{
    int arr[5]={10,15,5,20,25};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=5-1;i>0;i--)
    {
        if(arr[5-1]!=arr[i])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
    
}
