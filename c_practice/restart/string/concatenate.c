#include<stdio.h>
int main()
{
	char dest[20]="durga";
	char str[10]="prasad";
	int i=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	int j=0;
	while(str[j]!='\0')
	{
		dest[i+j]=str[j];
		j++;

	}
	dest[i+j] = '\0';
	printf("concatenate:%s",dest);
	return 0;
}

