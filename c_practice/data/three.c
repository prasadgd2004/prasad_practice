#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	double A,B,C;
	printf("enter the number:");
	scanf("%lf %lf %lf",&a,&b,&c);
	A=acos((b*b+c*c-a*a)/(2*b*c))*(180/M_PI);
	printf("angle A:%lf\n",A);
	B=acos((a*a+c*c-b*b)/(2*a*c))*(180/M_PI);
	printf("angle B:%lf\n",B);
	C=180-(A+B);
	printf("angle C:%lf\n",C);
	return 0;
}
