#include <stdio.h>
 int main()
{
	register int x=1;

	for(x=1; x<=7; x++)
	{
		printf("register: %d\n" ,x);
	}
	return 0;
}
