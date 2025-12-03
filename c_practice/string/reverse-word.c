#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the elements");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0,j,k;
	int n=strlen(str);
	for(k=0;k<=n;k++)
	{
		if(str[k]==' ' || str[k]=='\0')
		{
			j=k-1;
			while(i<j)
			{
				int temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				i++;
				j--;
			}
			i=k+1;
		}
	}
	printf("reverse the words:%s",str);
	return 0;
}


