#include<stdio.h>
int main()
{
	char str[20];
	printf("enter the elements");
	scanf("%[^\n]",str);
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	for(int i=0,j=len-1;i<j;i++,j--)
	{
		if(str[i]==str[j])
		{
			printf("is a palindrome\n");
			break;
		}
		else 
		{
			printf("is not a palindrome\n");
			break;
		}

	}
}
