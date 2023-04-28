#include<vector>
class maxHeap{
   std::vector<int> v;

public:
   void swap(int a,int b){
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
   }

   bool isEmpty(){
      return v.size()==0;
   }

   void push(int data){
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
      int parent =0;
      int l = 2*parent+1;
      int r = 2*parent+2;
      while(l<v.size()){
         int change = parent;
         if(v[change] < v[l]){
            change = l;
         }
         if(r<v.size() && v[change]<v[r]){
            change = r;
         }
         if(change==parent)
            break;
         swap(change,parent);
         parent = change;
         l = 2*parent+1;
         r = 2*parent+2;
      }
   }
   int pop(){
      int ans=v.at(0);
      v.at(0) = v.at(v.size()-1);
      v.pop_back();
      downHeapify();
      return ans;
   }
   void display(){
      std::cout<< "MaxHeap->";
      for(int i=0;i<v.size();i++){
         std::cout<<v.at(i)<<" ";
      }
      std::cout<<std::endl;
   }
};

class minHeap{
   std::vector<int> v;
public:
   bool isEmpty(){
      return v.size()==0;
   }

   void swap(int a,int b){
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
   }

   void push(int data){
      v.push_back(data);
      int child = v.size()-1;
      int parent = (child-1)/2;
      while(parent>=0){
         if(v[parent]>v[child]){
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
      int l = 2*parent+1;
      int r = 2*parent+2;
      while(l<v.size()){
         int change = parent;
         if(v[change] > v[l]){
            change = l;
         }
         if(r<v.size() && v[change]>v[r])
            change = r;

         if(change == parent){
            break;
         }

         swap(change,parent);
         parent = change;
         l = 2*parent+1;
         r = 2*parent+2;
      }
   }

   int pop(){
      int ans = v.at(0);
      v.at(0) = v.at(v.size()-1);
      v.pop_back();
      downHeapify();
      return ans;
   }

   void display(){
      std::cout<< "MinHeap->";
      for(int i=0;i<v.size();i++){
         std::cout<<v.at(i)<<" ";
      }
      std::cout<<std::endl;
   }
};
