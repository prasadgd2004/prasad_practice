#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);
    


    return 0;
}
