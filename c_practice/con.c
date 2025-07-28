#include <stdio.h>

int main()
{
        int num;
        printf("enter the values:");
        scanf("%d",&num);

        if(num >0)
                printf("positive\n");
        else if(num <0)
                printf("negative\n");
        else
                printf("zero\n");
        return 0;
}
