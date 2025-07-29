#include <stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the values:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("fahrenheit:%f\n",fahrenheit);
	return 0;
}
