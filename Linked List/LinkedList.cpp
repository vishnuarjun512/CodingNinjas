#include <iostream>
using namespace std;

#include "listClass.cpp"

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail=newNode;
        }
        cin >> data;
    }
    return head;
}

int length1(Node *head)
{
    int count=0;
    Node *t=head;
    while(t!=NULL)
    {
        count++;
        t=t->next;
    }
    return count;
}

Node *addElement(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    if (i == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        int count = 1;
        Node *temp = head;
        while (count < i - 1 && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            cout << "Position exceeds the linked list" << endl;
        }
    }
    return head;
}

Node *deleteAtPosition(Node *head, int i)
{
    Node *t1 = head;
    Node *t2 = NULL;
    int count = 0;
    if (i == 1)
    {
        int r=t1->data;
        head=head->next;
    }
    else
    {
        while (count < i - 1 && t1 != NULL)
        {
            t2 = t1;
            t1 = t1->next;
            count++;
        }
        if (t1 != NULL)
        {
            int d = t1->data;
            t2->next = t1->next;
            cout << "Deleted element is " << d << endl;
        }
        else
        {
            cout << "Position out of LinkedList bound" << endl;
        }
    }

    return head;
}

Node * mergeSorted(Node *head1, Node *head2)
{
    Node *H =NULL;
    Node *T = NULL;
    if(head1->data < head2->data)
    {
        H=head1;
        T=head1;
        head1=head1->next;
    }else{
        H=head2;
        T=head2;
        head2=head2->next;
    }

    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data < head2->data)
        {
            T->next=head1;
            head1=head1->next;
            T=T->next;
        }else{
            T->next=head2;
            head2=head2->next;
            T=T->next;
        }
    }

    if(head1==NULL)
    {
        T->next=head2;
    }else{
        T->next=head1;
    }
    return H;
}

Node * mergeSort(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node *fast=head->next;
    Node *slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *firstLast=slow;
    slow=slow->next;
    firstLast->next=NULL;

    head=mergeSort(head); 
    slow=mergeSort(slow);

    head=mergeSorted(head,slow);

    return head;
}

Node * reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *next=head->next;

    while(next!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    }
    curr->next=prev;
    return curr;
}

void print(Node *head)
{
    Node *temp=head;
    int l=0;
    while (temp != NULL)
    {
        cout <<temp->data << " ";
        temp=temp->next;
        l++;
    }
    cout << endl;
    cout << "Length->" << l<< endl;
}

int main()
{
    // Method to take input till input!=-1
    Node *head = takeInput();
    cout<<"Before MergeSorted->";
    print(head);
    cout<<"After MergeSorted->";
    head=mergeSort(head);
    print(head);

    cout<<"After reversing->";
    head=reverse(head);
    print(head);


    // Static Creation
    //  Node n1(1);
    //  Node * head=&n1;
    //  Node n2(2);

    // n1.next=&n2;

    // Node n3(3);
    // n2.next=&n3;

    // Node n4(4);
    // n3.next=&n4;

    // Node n5(5);
    // n4.next=&n5;
    // Node *temp=head;

    // Dynamic Creation

    // Node *n4=new Node(10);
    // Node *n5=new Node(20);

    // Node *head2=n4;
    // n4->next=n5;
}