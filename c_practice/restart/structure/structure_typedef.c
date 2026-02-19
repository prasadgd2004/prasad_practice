#include<stdio.h>
#include<string.h>
typedef struct student
{
       	char name[20];
       	int roll;
        float marks;
}dp;
int main()
{
	dp s;
	strcpy(s.name,"prasad");
        s.roll=1;
        s.marks=65.5;
         printf("%s\n",s.name);
	 printf("%d\n",s.roll);
         printf("%f\n",s.marks);
        
         return 0;
}

