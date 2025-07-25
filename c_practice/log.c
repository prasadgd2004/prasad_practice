#include <stdio.h>
int main()
{

	int a,b;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	printf("both are positive :%d\n",(a>0)&&(b>0));
	printf("atleast one positive:%d\n",(a>0)||(b>0));
	return 0;
}
