#include<iostream>
#include "heapClass.h"
using namespace std;
int main(){
   minHeap m;
   m.push(10);
   m.push(3);
   m.push(4);
   m.push(14);
   m.push(45);
   m.push(255);
   m.push(98);
   m.push(31);
   m.display();


   cout<<"Sorted ->";
   while(!(m.isEmpty())){
      cout<<m.pop()<<" ";
   }
   cout<<endl;
   return 0;
}
