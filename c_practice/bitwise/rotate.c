#include <stdio.h>
int main()
{
	unsigned int num,rotated,bits;
	int shift;
	char directions;

	printf("enter a positive number:");
       	scanf("%u",&num);
	printf("number of positions rotated:");
	scanf("%d",&shift);
	printf("enter directions  l or r:");
	scanf(" %c",&directions);
	bits= sizeof(num)*8;
       	shift=shift % bits;
	if (directions=='l')
	{
		rotated =(num<<shift) | (num>>(bits-shift));
	        printf("rotated left :%u\n",rotated);
	}
	else if (directions=='r')
	{
		rotated =(num>>shift) | (num<<(bits-shift));
		printf("rotated right:%u\n",rotated);
	}
	else
	{
		printf("invalid direction use right or left.\n");
	}

	return 0;
}
