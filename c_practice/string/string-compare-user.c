#include<stdio.h>
int main()
{
	char str1[10];
	printf("enter the elements");
	scanf("%[^\n]",str1);
	char str2[10];
	printf("enter the elements");
	scanf(" %[^\n]",str2);
	int i=0;
	int result=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			result=1;
			break;
		}
		i++;
	}
	if(result==0){
		printf("strings  are equal");
	}
	else
	{
		printf("strings are not  equal");
	}
	return 0;
}

