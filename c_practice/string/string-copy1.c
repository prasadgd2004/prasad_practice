#include<stdio.h>
int main()
{
	char str1[10];
	char str2[10];
	printf("enter the elements");
	scanf("%[^\n]",str1);
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	printf("string copy:%s",str2);
	return 0;
}

