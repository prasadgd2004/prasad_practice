#include<stdio.h>
#include <string.h>
struct employee
{
	int id;
	char name[10];
	int salary;
}s;
int main()
{
	struct employee *ptr=&s;
	ptr->id = 1;
	strcpy(ptr->name,"durga");
	ptr->salary = 50000;
	printf("before %d\n",ptr->id);
	printf("before %s\n",ptr->name);
	printf("before %d\n",ptr->salary);
	ptr->id = 25;
        strcpy(ptr->name,"prasad");
	ptr->salary = 60000;
	printf("after %d\n",ptr->id);
	printf("after %s\n",ptr->name);
	printf("after %d\n",ptr->salary);
	return 0;
}
