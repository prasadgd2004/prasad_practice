#include<stdio.h>
int main()
{
	int n=0x1234;
	n=(n&0xF0F0)|((n&0x0F00)>>8)|((n&0x000F)<<8);
	printf("nibble swap:0x%x\n",n);
	return 0;
}
