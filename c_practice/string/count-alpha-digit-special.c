#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	int alphabets=0,number=0,special=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			alphabets++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			number++;

		}
		else if(str[i]!=' ' && str[i]!='\n')
		{
		
			special++;
		}
		i++;

	}
       	printf("count of alphabets:%d\n",alphabets);
	printf("count of number:%d\n",number);
	printf("count of special character:%d\n",special);
	return 0;
}
