#include<stdio.h>
int main()
{
	char arr[]={"prasad"};
	char *ptr=arr;
	char *ptr1=&arr[4];
	printf("%c",*ptr);
	printf("%c",*ptr1);
	return 0;
}
