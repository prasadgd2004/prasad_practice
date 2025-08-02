#include <stdio.h>
#include <math.h>
int main()
{
	float base,height,area;
	printf("enter the number:");
	scanf("%f %f",&base,&height);
	area=(0.5)*base*height;
	printf("area of triangle:%f\n",area);
	return 0;
}
