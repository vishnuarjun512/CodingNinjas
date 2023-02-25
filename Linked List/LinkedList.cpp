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

int mid(Node *head)
{
    Node *rabbit=head->next;
    Node *turtle=head;
    while(rabbit!=NULL){
    
        rabbit=rabbit->next;
        if(rabbit!=NULL)
        {
        rabbit=rabbit->next;
        turtle=turtle->next;
            
        
        }

    }
    int d=turtle->data;
    return d;

}

void print(Node *head)
{
    Node *temp=head;
    while (temp != NULL)
    {
        cout <<temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
    int len=length1(head);
    cout << "Length->" << len << endl;
    int midElement=mid(head);
    cout<<"Mid->"<<midElement<<endl;
}

int main()
{

    // Method to take input till input!=-1
    Node *head = takeInput();
    print(head);

    int data, i;
    cout << "Enter position->";
    cin >> i;

    head = deleteAtPosition(head, i);
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