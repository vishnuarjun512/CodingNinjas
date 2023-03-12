#include <iostream>
#include <queue>
using namespace std;
class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

Node *createTree(Node *root)
{
    int val;
    cout << "\nEnter value-> ";
    cin >> val;
    root=new Node(val);

    if (val == -1)
    {
        return NULL;
    }else{
        root->left=createTree(root->left);
        root->right=createTree(root->right);
    }
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else{
            cout<< temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }

    // 1 2 -1 -1 3 -1 -1

}

int main()
{

    Node *root;
    root = createTree(root);
    printf("\n");
    levelOrderTraversal(root);

    return 0;
}
