#include <stdio.h>
int main()
{
	int years,days;
	printf("enter the days:");
	
	scanf("%d",&days);
	years=days/365;
	printf("%d years= %d days\n",years,days);

	int weeks;
	printf("enter the days:");
	scanf("%d",&days);
	weeks=days/7;
	printf("%d weeks=%d days\n",weeks,days);
	return 0;
}

