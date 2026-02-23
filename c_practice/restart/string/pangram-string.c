#include<stdio.h>
int  pangram_string(char *str)
{
	int alp=0;
	int count[26]={0};
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			int c=str[i]-'a';
			if(count[c]==0)
			{
				count[c]=1;
				alp++;
			}

		}
	
	}
	return alp;
}
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]",str);
	int alp=pangram_string(str);
	if(alp==26)
	{
		printf("pangram");
	}
	else
	{
		printf("is not pangram");
	}
	return 0;

}
