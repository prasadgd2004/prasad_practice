#include <stdio.h>

int main()
{
    char str[]="prasad";
    char *ptr=str;
    int len=0;
    while(*ptr !='\0')
    {
        len++;
        ptr++;
    }
    printf("length:%d",len);

    return 0;
}
