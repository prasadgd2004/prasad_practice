#include<stdio.h>
#include<string.h>
void string_concetanate(char str1[],char str2[])
{
        int i=0,j=0;
        while(str1[i]!='\0')
        {
                i++;
        }
        while(str2[j]!='\0')
        {
                str1[i]=str2[j];
                i++;
                j++;
        }
        str1[i]='\0';

        printf("string concetanate:%s",str1);
       
}

int main()
{
	char str1[20];
	printf("enter the elements");
	//scanf("%[^\n]",str1);
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	char str2[10];
	printf("enter the elements");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
	//scanf(" %[^\n]",str2);
	string_concetanate(str1,str2);
	return 0;
}

