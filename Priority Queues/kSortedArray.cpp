#include<iostream>
#include<queue>
using namespace std;

void kSortedArray(int a[],int n,int k){
   priority_queue<int> pq;
   for(int i=0;i<k;i++){
      pq.push(a[i]);
   }

   int j=0;
   for(int i=k;i<n;i++){
      a[j]=pq.top();
      pq.pop();
      pq.push(a[i]);
      j++;
   }

   for(int left = 0;left<k;left++){
      a[j++] = pq.top();
      pq.pop();
   }
}

int main(){
   int a[] = {10,12,7,5,2};
   int n = 5;
   int k =2;
   kSortedArray(a,n,k);

   for(int i=0;i<n;i++){
      cout<< a[i] << " "<< endl;
   }

   return 0;
}
