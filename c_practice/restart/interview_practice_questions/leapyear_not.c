#include<stdio.h>
void leafyear(int year)
{
	if(year%400==0)
	{
		printf("%d is leaf year\n",year);
	}
	else if(year%100==0)
        {
                printf("%d is not leaf year\n",year);
        }
	else if(year%4==0)
        {
                printf("%d is leaf year\n",year);
        }
	else
	{
                printf("%d is not leaf year\n",year);
        }
}


int main()
{
	leafyear(1996);
	leafyear(2000);
	leafyear(2002);
	leafyear(2004);
	return 0;
}


