#include <stdio.h>
int main()
{
	float centimeters,meters,kilometers;
	printf("enter the values:");
	scanf("%f",&meters);
	centimeters= meters*100;
	printf("centimeters:%f\n",centimeters);

	printf("enter the values:");
	scanf("%f",&centimeters);
	kilometers=centimeters/100000;
	printf("kilometers:%f\n",kilometers);

	return 0;
}
