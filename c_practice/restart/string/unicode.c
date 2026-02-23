#include<stdio.h>
int main()
{
	char str[100]="prasad";
	for(int i=0;str[i]!='\0';i++)
	{
		printf("unicode of %c : %d\n",str[i],str[i]);

	}
	return 0;
}
