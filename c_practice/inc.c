#include <stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	printf("before a++: %d\n",a);
	a++;
	printf("after a++: %d\n",a);
	++a;
	printf("after ++a: %d\n",a);

	printf("before a--: %d\n",a);
	a--;
	printf("after a--: %d\n",a);
	--a;
	printf("after --a: %d\n",a);

	return 0;
}
