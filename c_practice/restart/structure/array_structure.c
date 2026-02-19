#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s[3];


	for(int i=0;i<3;i++)
        {
		printf("enter the details");
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].marks);
	}
	for(int i=0;i<3;i++)
	{
		printf("student name:%s\n",s[i].name);
	       	printf("student roll:%d\n",s[i].roll);
		printf("student marks:%f\n",s[i].marks);
	}

       return 0;
}



