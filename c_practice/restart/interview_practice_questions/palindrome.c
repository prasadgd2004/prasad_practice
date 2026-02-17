#include<stdio.h>
void palindrome(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	for(int i=0,j=len-1;i<j;i++,j--)
	{

		if(str[i]==str[j])
		{
			printf("palindrome");
			break;
		}
		else
		{
			printf("is not palindrome");
			break;
		}
	}
}
int main()
{
	char str[10];
	printf("enter the string");
	scanf("%[^\n]",str);
	palindrome(str);
	return 0;
}


