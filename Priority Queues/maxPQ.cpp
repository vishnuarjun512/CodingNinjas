#include<iostream>
#include<vector>
using namespace std;

class PriorityQueue{
   vector<int> v;
public:
   PriorityQueue(){
      cout<<"Max Priority Queue constructed"<<endl;
   }

   bool isEmpty(){
      return v.size()==0;
   }

   void swap(int a,int b){
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
   }

   void insert(int data){
      v.push_back(data);
      int child = v.size()-1;
      int parent = (child-1)/2;
      while(parent>=0){
         if(v[parent]<v[child]){
            swap(parent,child);
         }else{
            break;
         }
         child = parent;
         parent = (child-1)/2;
      }
   }

   void downHeapify(){
      int parent = 0;
      int L = 2*parent+1;
      int R = 2*parent+2;
      while(L<v.size()){
         int minIndex = parent;
         if(v[minIndex] < v[L]){
            minIndex = L;
         }
         if(L<v.size() && v[minIndex] < v[R]){
            minIndex = R;
         }
         if(minIndex==parent){
            break;
         }
         swap(minIndex,parent);
         parent =minIndex;
         L = 2*parent+1;
         R = 2*parent+2;
      }
   }

   int removeMax(){
      int ans = v.at(0);
      v.at(0) = v.at(v.size()-1);
      v.pop_back();
      downHeapify();
      return ans; 
   }
   

   void display(){
      cout<<"Max PQ->";
      for(int i=0;i<v.size();i++){
         cout<<v.at(i)<<" ";
      }
      cout<<endl;
   }
};

int main(){
   PriorityQueue p;
   p.insert(4);
   p.insert(5);
   p.insert(6);
   p.insert(3);
   p.insert(9);
   p.insert(24);
   p.insert(40);
   p.insert(111);
   p.display();


   cout<<"\nRemove Max->";
   while(!p.isEmpty()){
      cout<<p.removeMax()<<" ";
   }


   return 0;
}
