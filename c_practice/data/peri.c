#include <stdio.h>
int main()
{
	int length;
	int breadth;
	int perimeter;
	printf("enter the values:");
	scanf("%d %d",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("perimeter of rectangle:%d\n",perimeter);
	return 0;
}
