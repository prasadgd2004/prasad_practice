#include<stdio.h>
int main()
{
	char str[100],flag=0;
	printf("enter the string");
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
			flag=1;
			break;
		}

	}
	if(flag==1)
                {
                        printf("palindrome");

                }
                else
                {
                        printf("is not palindrome");
                }

	return 0;
}

