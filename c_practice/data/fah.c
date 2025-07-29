#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter the values:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("celsius:%f\n",celsius);
	return 0;
}
