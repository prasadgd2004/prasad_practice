#include<stdio.h>
int main()
{
	char str[10];
	printf("enter the elements");
	scanf("%[^\n]",str);
	int i=0;
	while (str[i]!='\0')
	{
		
		if(str[i]>='A'  &&  str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if (str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else
		{
			continue;
		}
		i++;
	
		
	}
	printf("toggle:%s\n",str);
	return 0;
}


