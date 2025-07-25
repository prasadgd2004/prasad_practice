#include <stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	a+=5;
	printf("after a=a+5: %d\n",a);
	 a-=4;
        printf("after a=a-4: %d\n",a);
        a*=3;
        printf("after a=a*3: %d\n",a);

	return 0;
}

