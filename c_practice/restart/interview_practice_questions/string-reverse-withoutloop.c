#include<stdio.h>

void string_reverse(char *str)
{
	if(*str=='\0')
	{
		return;
	}
	string_reverse(str+1);
	printf("%c",*str);
}


int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	string_reverse(str);
	return 0;
}

