#include<stdio.h>
void string_length_reverse(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	 printf("string length:%d\n",len);
	 int i=0,j=len-1;
	 while(i<j)
	 {
		 int  temp=str[i];
		 str[i]=str[j];
		 str[j]=temp;
		 i++;
		 j--;
	 }
	 printf("reverse:%s",str);

}

int main()
{
	 char str[20];
	 printf("enter the string");
	 scanf("%[^\n]",str);
	string_length_reverse(str);
	 return 0;
}
