#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
		
	Node(int value){
		this->data=value;
		this->left=NULL;
		this->right=NULL;
	}
};

Node *createTree(Node *root){
	int newData;
	cout<<"Enter Data->"<<endl;
	cin>>newData;
	
	root=new Node(newData);
	if(newData==-1){
		return NULL;
	}

	root->left=createTree(root->left);
	root->right=createTree(root->right);

	return root;
}

void levelOrderTraversal(Node *root)
{
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		Node* dis=q.front();
		q.pop();

		if(dis==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}else{
			cout<<dis->data<<" ";
			if(dis->left!=NULL){
			q.push(dis->left);
			}
			if(dis->right!=NULL){
			q.push(dis->right);
			}
		}
	}
}

int main()
{
	Node *root=NULL;
	root=createTree(root);

	levelOrderTraversal(root);
	return 0;
}
