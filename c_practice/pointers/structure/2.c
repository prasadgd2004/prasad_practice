#include <stdio.h>
#include <string.h>
struct book
{
	char title[20];
	char author[10];
	int price;
}s;
int main()
{
	struct book *ptr=&s;
	strcpy(ptr->title,"mahabharatham");
	strcpy(ptr->author,"valmiki");
	ptr->price=500;
	printf("title=%s\n",ptr->title);
	printf("author=%s\n",ptr->author);
	printf("price=%d\n",ptr->price);
	return 0;
}
