#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[]="prasad";
	strcpy(str1,str2);
	printf("string copy:%s",str1);
	return 0;
}
