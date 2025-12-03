#include<stdio.h>
int main()
{
	char str[10];
	printf("enter the elements");
	scanf("%[^\n]",str);
	int i;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}

	}
	printf("upper to lower :%s\n",str);
	return 0;
}

