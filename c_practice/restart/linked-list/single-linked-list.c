#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node* link;
};


struct node* head = NULL;
struct node* tail = NULL;
struct node* temp = NULL;
void display()
{
        temp=head;
        while(temp!=NULL)
        {
                printf("%d->",temp->data);
                temp=temp->link;
        }
        printf("\n");
}
void delete_at_begin()
{
        temp=head;
        head=head->link;
        free(temp);
}

void delete_at_end()
{
        temp = tail;
        struct node *ptr=head;
        while(ptr->link->link!=NULL)
        {
                ptr=ptr->link;
        }

        ptr->link=NULL;
        tail=ptr;
        free(temp);
        temp = NULL;

}

void delete_at_certain_position()
{
        struct node *ptr=head;
        int pos=3;
        while(pos-2)
        {
                ptr=ptr->link;
                pos--;
        }
        temp = ptr->link;
        ptr->link=ptr->link->link;
        free(temp);
        temp = NULL;
}






void insert_at_begin()
{
        temp=malloc(sizeof(struct node));
        temp->data=5;
        temp->link=NULL;
        temp->link=head;
        head=temp;
}
void insert_at_end(int data)
{
        temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        if(head == NULL)
        {
                head = tail =temp;
        }
        else
        {
                tail->link=temp;
                tail=temp;
        }
}
void insert_at_certain_position()
{
        struct node *ptr=head;
        temp=malloc(sizeof(struct node));
        temp->data=60;
        temp->link=NULL;
        int pos=3;
        while(pos-2)
        {
                ptr=ptr->link;
                pos--;
        }
        temp->link=ptr->link;
        ptr->link=temp;
}
void reverse_linkedlist()
{
        struct node *ptr=head;
        struct node *prev=NULL;
        struct node *next=NULL;
        while(ptr!=NULL)
        {
                next=ptr->link;
                ptr->link=prev;
                prev=ptr;
                ptr=next;
        }
        head=prev;
}


void search(int data)
{
        struct node* ptr=head;
        int flag=0;
        while(ptr!=NULL)
        {
                if(ptr->data == data)
                {
                        flag=1;
                }
                ptr = ptr->link;
        }

                if(flag== 1)
                {
                        printf("found\n");
                }
                else
                {
                        printf("not found\n");
                }
}


int  main()
{
        while(1)
        {
        int n;
        printf("enter the elements\n");
        scanf("%d",&n);
        if(n==-1)
        {
                break;
        }
        else
        {
                insert_at_end(n);
        }
        }

        display();
        insert_at_begin();
        display();
        insert_at_certain_position();
        display();
        delete_at_begin();
        display();
        delete_at_end();
        display();
        delete_at_certain_position();
        display();
        reverse_linkedlist();
        display();
        search (60);
  
        return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         1,1           Top


