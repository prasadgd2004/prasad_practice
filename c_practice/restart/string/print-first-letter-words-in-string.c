#include<stdio.h>
int main()
{
	char str[100];
	int flag=0;
	printf("enter the string");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			if(flag==0)
			{
				flag=1;
				printf("%c",str[i]);

			}

		}
		else
		{
			flag=0;
		}

	}
	return 0;
}
