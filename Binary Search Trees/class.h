#include<iostream>
template <typename T>
class BinaryTreeNode{
  public:
    T data;
    BinaryTreeNode<T> * left;
    BinaryTreeNode<T> * right;

    BinaryTreeNode(T data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }
};

class BST{
  BinaryTreeNode<int> * root;

  public:
    //Constructor
    BST(){
      root = NULL;
    }

    //Destructor
    ~BST(){
      delete root;
    }

  private:

    BinaryTreeNode<int> * inOrderSuccessor(BinaryTreeNode<int> * root){
      BinaryTreeNode<int> * temp = root;
      while(temp!=NULL || temp->left!=NULL){
        temp = temp->left;
      }
      return temp;
    }
    
    BinaryTreeNode<int> * deleteData(BinaryTreeNode<int> * root,int data){
      if(root->data == data){
          if(root->left==NULL && root->right==NULL){   
            delete root;
            return NULL;
          }else if(root->left){
            BinaryTreeNode<int> * leftNodeExists = root->left;
            delete root;
            return leftNodeExists;
          }else if(root->right){
            BinaryTreeNode<int> * rightNodeExists = root->left;
            delete root;
            return rightNodeExists; 
          }else{
            BinaryTreeNode<int> * inOrderS = inOrderSuccessor(root->right);
            root->data = inOrderS->data;
            root->right = deleteData(root->right,inOrderS->data); 
          }
      }else if(root->data > data){
        root->left = deleteData(root->left,data);
      }else if(root->data < data){
        root->right = deleteData(root->right,data);
      } 
      return root;
    }
    
  public:
    void deleteData(int data){
      root = deleteData(root,data);
    }

  private:
    // Helper Function for insertData
    BinaryTreeNode<int> * insertData(int data,BinaryTreeNode<int> * root){
      if(root==NULL){ 
        BinaryTreeNode<int> * newNode = new BinaryTreeNode<int>(data);
        root=newNode;
      }else if(root->data >= data){
        root->left=insertData(data,root->left);
      }else{ 
        root->right = insertData(data,root->right);
      }
      return root;
    }

  public:
    void insertData(int data){
      this->root = insertData(data,this->root);
    }

  private:
    bool hasData(int data,BinaryTreeNode<int> * node){
      if(node == NULL)
        return false;
      if(node->data==data)
        return true;
      else if(node->data > data)
        return hasData(data,node->left);
      else
        return hasData(data,node->right);
    }
    
  public: 
    bool hasData(int data){
      return hasData(data,root);
    }

  private:
    void displayTree(BinaryTreeNode<int> * node){
      if(node==NULL){
        return;
      }
      displayTree(node->left);
      std::cout<<node->data<<" ";
      displayTree(node->right);
    }

  public:
    void displayTree(){
      displayTree(this->root);
    }

};
