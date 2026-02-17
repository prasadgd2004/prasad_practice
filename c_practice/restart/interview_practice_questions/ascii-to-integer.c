#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	int i=0,sign=1,result=0;
	while(str[i]==' ')
	{
		i++;
	}
	if(str[i]=='-')
	{
		sign=-1;
		i++;
	}
	else if(str[i]=='+')
	{
		sign=1;
		i++;
	}
	while(str[i]>='0' && str[i]<='9')
	{
		result=result*10+(str[i]-'0');
		i++;
	}
	result=result*sign;
	printf("%d",result);
	return 0;
}



