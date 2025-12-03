#include<stdio.h>
#include<string.h>
int main()
{
        char str[20];
        printf("enter the string");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        int len=0;
        while(str[len]!='\0')
        {
                len++;
        }
        printf("string length:%d\n",len);
	int i=0,j=len-1;
	while(i<j)
	{
		int temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("reverse:%s",str);

        return 0;
}

