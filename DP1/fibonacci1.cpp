#include<iostream>
using namespace std;

int fibHelper(int *a,int n){
  if(n<=1)
    return n;

  if(a[n]!=0){
    return a[n];
  }
  int x = fibHelper(a,n-1);
  int y = fibHelper(a,n-2);
  a[n] = x+y;
  return a[n]; 
}

int fib(int n){
  int *a = new int[n+1];
  for(int i=0;i<n+1;i++){
     a[i] = 0;
     }
  return fibHelper(a,n);
}

int main(){
  int n;
  cout<<"Enter n->";
  cin>>n;
  cout<<"Fib of "<<n<<" is"<<fib(n);
  return 0;
}
