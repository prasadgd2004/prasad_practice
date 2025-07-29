#include <stdio.h>
int main()
{
	int length;
	int breadth;
	int area;
	printf("enter the values:");
	scanf("%d %d",&length,&breadth);
	area= length*breadth;
	printf("area of rectangle:%d\n",area);
	return 0;
}
