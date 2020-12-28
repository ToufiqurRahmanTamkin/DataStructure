#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}node;

node* head=NULL;

void insert_beginning(int data)
{
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void printData()
{
    node*current=head;
    printf("New List is: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}

int main()
{
    insert_beginning(5);
    printData();

    insert_beginning(10);
    printData();

    insert_beginning(15);
    printData();

    insert_beginning(20);
    printData();

    insert_beginning(25);
    printData();
}