#include<iostream>
#include<queue>
using namespace std;

int main(){
   priority_queue<int, vector<int>, greater<int> > q;
   q.push(10);
   q.push(13);
   q.push(1);
   q.push(5);
   q.push(0);

   cout<<(q.empty() ? "True":"False")<<endl;

   cout<<"Size -> "<<q.size()<<endl;
   int t = q.top();
   cout<<"Top ->"<<t<<endl;

   while(!q.empty()){
      cout<< q.top() << " ";
      q.pop();
   }
   cout<<endl;
}
