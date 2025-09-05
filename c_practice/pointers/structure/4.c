#include <stdio.h>
#include <string.h>
struct person
{
	int age;
	char name[7];
}s;
int disp(struct person *ptr)
{
	ptr->age=20;
	strcpy(ptr->name,"prasad");
	printf("age:%d\n",ptr->age);
	printf("name:%s\n",ptr->name);
	
}
int main()
{
	struct person s;
	disp(&s);
	return 0;
}

