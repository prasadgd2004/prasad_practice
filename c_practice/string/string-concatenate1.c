#include<stdio.h>
int main()
{
	char str1[20];
	//char str2[10];
	printf("enter the elements a:\n");
	scanf("%[^\n]",str1);
	char str2[10];

	printf("enter the elements b:");
	scanf(" %[^\n]",str2);
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';

	printf("string concetanate:%s",str1);
	return 0;
}

