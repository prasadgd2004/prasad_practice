#include <stdio.h>
struct xyz
{
	int x;
	char y;
	float z;
}s;
int main()
{
	struct xyz *ptr=&s;
	ptr->x=15;
	ptr->y='p';
	ptr->z=3.5;
	printf("x=%d\n",ptr->x);
	printf("y=%c\n",ptr->y);
	printf("z=%f\n",ptr->z);

	return 0;
}

