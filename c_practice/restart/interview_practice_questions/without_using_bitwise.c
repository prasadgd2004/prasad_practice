#include<stdio.h>
int main()
{
	unsigned int n=0xabcdef12,rev=0,rem=0;
	while(n!=0)
	{
		rev=n%256;
		rem=rem*256+rev;
		n=n/256;
	}
	printf("swap:%x",rem);
	return 0;
}

