#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter the values:");
	scanf("%d %d",&a,&b);
	 c= a+b;
	printf("sum of %d %d is %d\n",a,b,c);
	 d= a-b;
	printf("sub of %d %d is %d\n",a,b,d);
	 e= a*b;
	printf("mul of %d %d is %d\n",a,b,e);
	 f= a/b;
	printf("div of %d %d is %d\n",a,b,f);
	g= a%b;
	printf("mod of%d %d is %d\n",a,b,g);
	return 0;
}
