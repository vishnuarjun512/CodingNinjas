#include<iostream>
using namespace std;

#include "TreeNodeClass.h"

void printTree(Node<int>* root)
{
	cout<<root->data<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printTree(root->children[i]);
	}
}

Node<int> * takeInput()
{
	cout<<"Enter root Data->";
	int rootData;
	cin >> rootData;
	Node<int> * root= new Node<int>(rootData);

	int n;
	cout<<"Enter number of chidren of "<<rootData<<"->";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		Node<int>* child=takeInput();
		root->children.push_back(child);
	}

	return root;
}

void printTreeDetailed(Node<int>* root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<":";
	for(int i=0; i < root->children.size();i++)
	{
		cout<<root->children[i]->data<<",";
	}

	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printTreeDetailed(root->children[i]);
	}
}

int main()
{
	Node<int> * root=takeInput();

	printTree(root);
	cout<<endl;
	cout<<"Detailed Print:"<<endl;
	printTreeDetailed(root);
	/*
	Node<int>* root=new Node<int>(1);
	Node<int>* child1=new Node<int>(2);
	Node<int>* child2=new Node<int>(4);
	Node<int>* child3=new Node<int>(3);
	root->children.push_back(child1);
	root->children.push_back(child2);
	root->children.push_back(child3);
	cout<<"Normal Print:"<<endl;*/

}
