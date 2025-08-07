#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float num1,num2;
	float eplison =0.0001;
	printf("enter the numbers:");
	scanf("%f %f",&num1,&num2);
	if (fabs(num1 - num2) < eplison)
	{
		printf("floating for equal to precision:%.4f\n",eplison);
	}
	else
	{
		printf("floating is not equal to precision:%.4f\n",eplison);
	}
	return 0;
}

