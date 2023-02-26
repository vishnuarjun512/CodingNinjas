/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
Node * takeinput2(Node *head,int data)
{
	Node *newNode=new Node(data);
	Node *traverse=head;
	Node *traverse2=NULL;
	while(traverse!=NULL)
	{
		traverse2=traverse;
		traverse=traverse->next;
	}

	traverse2->next=newNode;
	return head;
}
int findlength(Node *head)
{
	int l=0;
	Node *temp=head;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	return l;
}

Node *appendLastNToFirst(Node *head, int n)
{
	int len=findlength(head);
	n=len-n;
	while(n!=0)
	{
		head=takeinput2(head,head->data);
		Node *del=head;
		head=head->next;
		delete del;
		n--;
	}
    return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
