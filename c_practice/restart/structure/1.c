#include<stdio.h>
#include<string.h>
struct student 
{
	int roll;
	float marks;
	char name[20];
};
int main()
{
	struct student s1;

	s1.roll=1;
	s1.marks=65.5;
	strcpy(s1.name,"prasad");

	printf("%d\n",s1.roll);
	printf("%f\n",s1.marks);
	printf("%s\n",s1.name);
	 return 0;
}

