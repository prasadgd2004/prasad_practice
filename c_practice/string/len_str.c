#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("string length:%d\n",i);
	return 0;
}
