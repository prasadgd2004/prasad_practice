#include <stdio.h>
#include <math.h>
int main()
{
	float area,side;
	printf("enter the number:");
	scanf("%f",&side);
	area=(1.73/4)*side*side;
	printf("area of equilateral:%f\n",area);
	return 0;
}
