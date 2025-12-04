#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter the string");
	scanf("%[^\n]",str);
	char sub[10];
	printf("enter the sub string");
	scanf(" %[^\n]",sub);
	int len1=strlen(str);
	int len2=strlen(sub);
	int i,j,k=0;
	int count=0,x=0;
	for(i=0;i<len1;i++)
	{
		for(j=i;j<i+len2;j++)
		{
			if(str[i+k]== sub[k])
			{
				count++;
				k++;
			}
		}
		if(count==len2)
		{
			printf("substring  is found");
			x=1;
			break;
		}

	}
	if(x==0)
	{
		printf("substring is not found");

	}
	return 0;

}





