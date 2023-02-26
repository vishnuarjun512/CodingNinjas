#include<stdio.h>
#include<stdlib.h>

typedef struct List{
    struct List *prev;
    int data;
    struct List *next;
}Node;

Node *head=NULL;
Node *tail=NULL;

Node * getNode(int element)
{
    Node * newNode=(Node*)malloc(sizeof(Node));
    newNode->data=element;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void insertElement(int new)
{
    Node *newNode=getNode(new);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }
}

void removeElement()
{
    if(head==NULL)
    {
        printf("\nNo Nodes");
    }else{
        Node *deleteingNode=head;
        int r=head->data;
        head=head->next;
        free(deleteingNode);
        printf("\nThe deleted element is->%d",r);     
    }
}

void display()
{
    if(head==NULL)
    {
        printf("\nNo Nodes");
    }else{
    Node *traverse=head;
    printf("\nLinked list->");
    while(traverse!=NULL)
    {
        printf("%d ",traverse->data);
        traverse=traverse->next;
    }
    }
}

void reverseDisplay()
{
    
    if(head==NULL)
    {
        printf("\nNo Nodes");
    }else{
    Node *traverse=tail;
    printf("\nReverse Linked list->");
    while(traverse!=NULL)
    {
        printf("%d ",traverse->data);
        traverse=traverse->prev;
    }
    }
}

int main()
{
    int n=1,newElement;
    while(n!=0)
    {
        printf("\n1.Insert 2.Remove 3.Display \nEnter choice->");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("\nEnter elment->");
            scanf("%d",&newElement);   
            insertElement(newElement);        
            display();
            break;
        case 2:
            removeElement();
            display();
            break;

        case 3:
            reverseDisplay();
            break;
        default:
            break;
        }
    }
}