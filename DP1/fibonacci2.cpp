#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n->";
  cin>>n;
  int *a = new int[n+1];
  for(int i=0;i<n;i++){
    if(i<=1){
      a[i] = i;
    }else{
      a[i] = a[i-1]+a[i-2];  
    }
    cout<<a[i]<<" ";
  } 
  return 0;
}
