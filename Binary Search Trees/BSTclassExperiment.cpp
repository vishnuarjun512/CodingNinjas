#include<iostream>
#include "class.h"
using namespace std;

int main(){
  int n,data;
  BST* root = new BST();
  while(n!=0){
    cout<<"1.insertData 2.deleteData 3.hasData \nEnter choice->";
    cin>>n;
    switch (n) {
      case 1:
        cout<<"\nEnter New Node Data->";
        cin>>data;
        root->insertData(data);
        cout<<"\nInserted Successfully"<<endl;
        break;

      case 2:
        cout<<"\nEnter Node to be deleted->";
        cin>>data;
        root->deleteData(data);
        break;

      case 3:
        cout<<"\nTree ->";
        root->displayTree();
        cout<<"\n";
        break;

      case 4:
        cout<<"Enter data to find->";
        cin>>data;
        cout<<(root->hasData(data) ? "\nFound":"\nNot Found");
        break;
      default:
        cout<<"Invalid choice!!"<<endl;
        break;
    }
    
  }
}
