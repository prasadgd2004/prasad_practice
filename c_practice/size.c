#include <stdio.h>
int main()
{ 
	int x=100;
	float y=3.14;
	char z='a';

	printf("size of x: %lu bytes\n",sizeof(x));
	printf("size of y: %lu bytes\n",sizeof(y));
	printf("size of z: %lu bytes\n",sizeof(z));
	return 0;
}
