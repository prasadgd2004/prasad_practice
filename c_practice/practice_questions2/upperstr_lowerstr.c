#include <stdio.h>

int main()
{
    char str[100];
    printf("enter the uppercase");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        
    }
    printf("string in lowercase:%s",str);
    

    return 0;
}
