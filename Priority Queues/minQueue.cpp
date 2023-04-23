#include<iostream>
#include<vector>
using namespace std;
class PQ{
   vector<int> v;

   public:
   //Constructor
   PQ(){
   }

   bool isEmpty(){
      return v.size()==0;
   }

   int getSize(){
      return v.size();
   }

   int getMin(){
      if(isEmpty()){
         return 0;      // If v is empty
      }
      return v.at(0);
   }

   int child1(int i){
      return 2*i+1;
   }
   int child2(int i){
      return 2*i+2;
   }
   
   void insert(int element){
      v.push_back(element);
      int childIndex = v.size()-1;
      while(childIndex>0){
      int parentIndex = (childIndex-1)/2;
      if(v.at(childIndex)<v.at(parentIndex)){
         int temp = v.at(parentIndex);
         v.at(parentIndex) =v.at(childIndex);
         v.at(childIndex) = temp;
      }else{
            break;
         }
      childIndex = parentIndex;
      }
   }

   void swap(int a,int b){
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
   }

   void downHeapify(int i){
      int Parent = i;
      int L = 2*Parent+1;
      int R = 2*Parent+2;
      while(L<v.size()){
         int minIndex = Parent;
         if(v[minIndex] > v[L]){
            minIndex = L;
         }
         if(R<v.size() && v[minIndex] > v[R]){
            minIndex = R;
         }
         swap(Parent,minIndex);
         if(Parent == minIndex){
            break;
         }
         Parent = minIndex;
         L = 2*Parent+1;
         R = 2*Parent+2;
      }
   }

   int removeMin(){
      if(isEmpty()){
         return 0;
      }
      int ans = v.at(0);
      v.at(0)=v.at(v.size()-1);
      v.pop_back();
      downHeapify(0);
      return ans;
   }
   
   void display(){
      cout<<"\nPriority Queue->";
      for(int i=0;i<v.size();i++){
         cout<<v.at(i)<<" ";
      }
   }
};

int main(){   
   PQ p;
   int n=1,data;
   while(n!=0){
      cout<<"\nEnter choice->";
      cin>>n;
      switch(n){
         case 1:
            cout<<"\nEnter data->";
            cin>>data;
            p.insert(data);
            break;

         case 2:
            data= p.removeMin();
            cout<<"Removed ->"<<data;
            break;

         case 3:
            p.display();
            break;

         default:
            cout<<"\nInvalid"<<endl;
            break;
      }
   }
   return 0;
}
