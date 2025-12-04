#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		
		i++;
		count++;
	}
	printf("count the words in string:%d\n",count);
	return 0;
}
