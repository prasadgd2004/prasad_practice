#include<stdio.h>
int main()
{
	char str[20]="prasad";
	for(int i=0;str[i]!='\0';i++)
	{
		int count = 1;
		for(int j=i+1;str[j]!='0';j++)
		{ 
			if(str[j] == str[i]){
				count++;
			}
		}
		if(count == 1){
			printf("non repeating character:%c",str[i]);
			break;
		}

	}
	return 0;
}
