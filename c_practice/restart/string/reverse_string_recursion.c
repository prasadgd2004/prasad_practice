#include<stdio.h>
#include<string.h>

void reverse_string(char *l, char *r)
{
	if(l<r)
	{
		int temp=*l;
		*l=*r;
		*r=temp;
	reverse_string(l+1,r-1);
	}
}

int main()
{
	char str[10];
	printf("enter the string");
	scanf("%[^\n]",str);
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	char *l=str; 
	char *r=str+len-1;
	reverse_string(l,r);
	printf("%s",str);
	return 0;


}
