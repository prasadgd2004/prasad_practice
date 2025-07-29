#include<stdio.h>
#define pi 3.14
int main()
{
	float radius ,diameter;
	printf("enter the values:");
	scanf("%f",&diameter);
	radius= diameter/2;
	printf("radius of the circle:%f\n",radius);
	
	printf("enter the values:");
	scanf("%f",&radius);
	diameter= 2*radius;
	printf("diameter of circle:%f\n",diameter);

	float circumference;
	printf("enter the values:");
	scanf("%f",&radius);
	circumference= 2*pi*radius;
	printf("circumference of circle:%f\n",circumference);

	float area;
	printf("enter the values:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("area of circle:%f\n",area);



	return 0;
}

