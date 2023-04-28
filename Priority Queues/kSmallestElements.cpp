#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> kLargest(int a[],int n,int k){
   priority_queue<int ,vector<int> ,greater<int> > v;
   for(int i=0;i<k;i++){
      v.push(a[i]);
   }

   priority_queue<int> w;
   for(int i=k;i<n;i++){
      w.push(a[i]);
   }

   for(int i=0;i<k;i++){
      if(v.top() < w.top()){
         int temp = w.top();
         w.pop();
         v.pop();
         v.push(temp);
      }
   }

   vector<int> ans;
   while(!(v.empty())){
      ans.push_back(v.top());
      v.pop();
   }
   return ans;

}

vector<int> kSmallest(int arr[], int n, int k) {
   // Write your code here
   priority_queue<int> v;
   for(int i=0;i<k;i++){
      v.push(arr[i]);
   }

   priority_queue<int ,vector<int> , greater<int> > w;
   for(int i=k;i<n;i++){
      w.push(arr[i]);
   }

   for(int i=0;i<k;i++){
      if(v.top() > w.top()){
         int temp = w.top();
         w.pop();
         v.pop();
         v.push(temp);
      }
   }

   vector<int> ans;
   while(!(v.empty())){
      ans.push_back(v.top());
      v.pop();
   }
   return ans;
}

int main()
{
   int n;
   cin>>n;

   int *a = new int[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }

   int k;
   cin>>k;
   vector<int> v = kLargest(a,n,k);
   for(int i=0;i<v.size();i++){
      cout<<v.at(i)<< " ";
   }
   cout<<endl;
   return 0;
}
