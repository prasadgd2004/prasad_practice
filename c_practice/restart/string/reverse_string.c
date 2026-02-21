#include<stdio.h>
char reverseString(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}
int main()
{
	char s[10];
	printf("enter the string");
	scanf("%[^\n]",s);
	reverseString(s);
	printf("%s",s);
	return 0;
}

