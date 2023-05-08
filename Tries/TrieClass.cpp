#include<iostream>
#include "TrieNode.h"
#include<string>
using namespace std;

class Trie{
  TrieNode * root;
  
public:
  Trie(){
    root = new TrieNode('\0');
  }

  void insertWord(TrieNode *root,string word){
    //Base case
    if(word.length()==0){
      root->isTerminal = true;
      return;
    }

    //Small Calculation
    int index = word[0] - 'a';
    TrieNode *child;
    if(root->children[index] != NULL){
      child = root->children[index];
    }else{
      child = new TrieNode(word[0]);
      root->children[index] = child;
    }
  
    //Recursive Call
    insertWord(child,word.substr(1)); 
  }
  
  
  void insertWord(string word){
    insertWord(this->root,word);      //Calling Helper function as the user does not need to know about root
  }

  //Helper function for Search
  bool search(TrieNode * root,string word){
    if(word.length()==0){
      return root->isTerminal;
    }
    
    int index = word[0] - 'a';
    if(!root->children[index]){
      return false;
    } 
    return search(root->children[index],word.substr(1));
  }
  
  //Search Function for user
  bool search(string word){
    if(word.length()==0){
      return false;
    }
    return search(this->root,word);
  }

  void removeWord(TrieNode* root,string word){
    if(word.size()==0){
      root->isTerminal = false;
      return;
    }

    int index = word[0] - 'a';
    TrieNode * child;
    if(root->children[index]==NULL){
      return;
    }else{
      child = root->children[index];
    }
    
    removeWord(child,word.substr(1)); 
    
    if(child->isTerminal==false){
      for(int i=0;i<26;i++){
        if(child->children[i]!=NULL){
          return;
        }
      }

      delete child;
      root->children[index] = NULL;
    }
  }
  
  //Remove for user
  void removeWord(string word){
    removeWord(this->root,word);
  }

  void displayAll(TrieNode * root,string prefix){
    if(root==NULL){
      return;
    }
    if(root->isTerminal){  
      cout << prefix << root->data << endl;
    }
    for(int i=0;i<26;i++){
      if(root->children[i]){
        displayAll(root->children[i],prefix + root->data);
      }
    }
  }

  void display(){
    displayAll(this->root,"");
  }
};

int main(){
  int n=1;
  string word;
  Trie T;
  while(n!=0){
    printf("\n1.Insert Word \n2.Display \n3.Search \n4.Delete \nEnter choice->");
    scanf("%d",&n);
    switch (n) {
      case 1:
        cout<<"Enter your word->";
        cin>>word;
        T.insertWord(word);
        break;

      case 2:
        T.display();
        break;

      case 3:
        cout<<"\nEnter word to search->";
        cin>>word;
        cout<< (T.search(word) ? "True":"False");
        break;

      case 4:
        cout<<"\nEnter word to be removed->";
        cin>>word;
        T.removeWord(word);
        break;

      case 0:
        cout<<"\nExiting....";
        break;

      default:
        printf("\nInvalid Choice!!");
        break;
    }
  }
  return 0;
}
