#include<stdio.h>
int main()
{
	char str[20];
	printf("enter the elements");
	scanf("%[^\n]",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}

	}
	printf("lower to upper string:%s\n",str);
	return 0;
}

