#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(str[j]>str[j+1])
			{
				char temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}

		}
	}
	printf("after sorting the string\n");
		printf("%s",str);
	
	return 0;
}
