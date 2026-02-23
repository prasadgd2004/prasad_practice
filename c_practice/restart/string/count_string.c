#include<stdio.h>
int main()
{
	char str[100];
	int flag=0,count=0;
	printf("enter the string\n");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			if(flag==0)
			{
				flag=1;
				count++;
			}
		}
		else
		{
			flag=0;
		}

	}
	printf("%d",count);
	return 0;
}


