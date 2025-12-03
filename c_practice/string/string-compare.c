#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="prasad";
	char str2[]="prasad";
	int res=strcmp(str1,str2);
	if(res==0)
	{
		printf("strings are equal");
	}
	else {
		printf("strings are not equal");
	}

	return 0;
}

