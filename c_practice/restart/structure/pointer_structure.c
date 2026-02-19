#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;

};
int main()
{
	struct student s;

	struct student *ptr=&s;
	 printf("enter the details");
	 scanf("%s%d%f",ptr->name,&ptr->roll,&ptr->marks);

	 printf("%s\n",ptr->name);
	 printf("%d\n",ptr->roll);
	 printf("%f\n",ptr->marks);

	 return 0;
}



