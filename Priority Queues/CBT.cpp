#include<iostream>
using namespace std;
template <typename T>
class BST{
public:
   T data;
   BST * left;
   BST * right;

   BST(T data){
      this->data=data;
      this->left=NULL;
      this->right=NULL;
   } 
};

void display(BST<int> * root){
   if(root==NULL){
      return;
   }
   display(root->left);
   cout<<root->data<<" ";
   display(root->right);
}

BST<int> * insert(BST<int> * root,int data){
   if(root==NULL){
      BST<int> * newNode = new BST<int>(data);
      return newNode;
   }else if(root->data>=data){
      root->left = insert(root->left,data);
   }else{
      root->right = insert(root->right,data);
   }
   return root;
}

int main(){
   BST<int> * root = NULL;
   int choice = 1,data;
   while(choice!=0){
      cout<<"\nEnter choice->";
      cin>>choice;
      switch (choice) {

         case 1:
            cout<<"\nEnter data ->";
            cin>>data;
            root=insert(root,data);
            break;

         case 3:
            display(root);
            break;

         default:
            cout<<"\nInvalid choice";           
            break;
      }
   }
   return 0;
}
