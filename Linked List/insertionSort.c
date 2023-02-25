#include<stdio.h>
#include<stdlib.h>

typedef struct List{
    int data;
    struct List *next;
}Node;

Node *head=NULL;
Node *tail=NULL;


Node * getNode(int element){
    Node * p=(Node*)malloc(sizeof(Node));
    p->data=element;
    p->next=NULL;
    return p;
}

void push(int newElement) {
    Node *newNode=getNode(newElement);
    if(head==NULL)
    {
        tail=newNode;
        head=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
}

void selectionSort()
{
    Node * i;
    Node * j;
    int temp;
    for(i=head;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}

void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
int main()
{
    push(5);
    push(4);
    push(10);
    push(12);
    push(11);
    printf("Before->");
    display();
    printf("After->");
    selectionSort();
    display();
    return 0;
}