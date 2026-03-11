#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
	
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void display()
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

void insert_at_begin()
{
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=5;
	temp->next=NULL;
	temp->next=head;
	head->prev=temp;
	head=temp;
}

void insert_at_end()
{
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=40;
	temp->next=NULL;
	tail->next=temp;
	temp->prev=tail;
	tail=temp;

}

void insert_at_certain_position()
{
	struct node *ptr=head;
	int pos=3;
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=50;
	temp->next=NULL;
	while(pos-2)
	{
		ptr=ptr->next;
		pos--;
	}
	temp->next=ptr->next;
	ptr->next=temp;
	temp->prev=ptr;
	temp->next->prev=temp;

}
void delete_at_begin()
{
	 temp=head;
	 head=head->next;
	 head->prev=NULL;
	 free(temp);
}

void delete_at_end()
{
	 temp=tail;
	 struct node *ptr=head;
	 while(ptr->next->next!=NULL)
	 {
		ptr=ptr->next;
	 }
 	 temp=ptr->next;
	 ptr->next=NULL;
	 tail=ptr;
	 free(temp);
}

void delete_at_certain_position()
{
	struct node *ptr=head;
	int pos=2;
	while(pos-2)
	{
		  ptr=ptr->next;
		  pos--;
	}
	temp=ptr->next;
	ptr->next=ptr->next->next;
	temp->next->prev=ptr;
	temp->prev=NULL;
	temp->next=NULL;
	free(temp);
}
	
void reverse()
{
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		temp=ptr->prev;
		ptr->prev=ptr->next;
		ptr->next=temp;
		ptr=ptr->prev;
	}
	head=temp->prev;
}

void search(int data)
{
	struct node *ptr=head;
	int flag=0;
	while(ptr!=NULL)
	{
		if(ptr->data==data)
		{
			flag=1;
		}
		ptr=ptr->next;
	}
	if(flag==1)
	{
		printf("element found\n");
	}
	else
	{
		printf("element is not found\n");
	}

}

void middle_node()
{
	struct node *slow=head;
	struct node *fast=head;
	if(fast->next!=NULL && fast->next->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	printf("%d",slow->data);
}
int main()
{
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=10;
	temp->next=NULL;
	if(head==NULL)
	{
		head=tail=temp;
	}

	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=20;
	temp->next=NULL;
	tail->next=temp;
	temp->prev=tail;
	tail=temp;

	temp=malloc(sizeof(struct node));
        temp->prev=NULL;
        temp->data=30;
        temp->next=NULL;
        tail->next=temp;
        temp->prev=tail;
        tail=temp;


	display();
	insert_at_begin();
	display();
	insert_at_end();
	display();
	insert_at_certain_position();
	display();
	delete_at_begin();
	display();
	delete_at_end();
	display();
	delete_at_certain_position();
	display();
	reverse();
	display();
	search(30);
	middle_node();
	

	return 0;
}

