#include <stdio.h>
int main()
{
	char str[20];
	printf("enter the elements:");
	scanf("%[^\n]",str);
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	printf("length :%d\n",len);
	int i,j=0;
	char rev[20];

	for(i=len-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';

	printf("reverse string:%s\n",rev);
	return 0;
}

