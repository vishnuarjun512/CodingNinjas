#include <climits>
#include<iostream>
using namespace std;

int minStepsHelper(int *a,int n){
  if(n<=1)
    return 0;

  if(a[n]!=-1)
    return a[n];
  
  int x = minStepsHelper(a,n-1);

  int y = INT_MAX,z = INT_MAX;

  if(n%2==0)
    y = minStepsHelper(a, n/2);

  if(n%3==0)
    z = minStepsHelper(a, n/3);

  a[n] = 1+min(x,min(y,z));
  return a[n];
  // return 1+min(x,min(y,z));
}

int minSteps(int n){
  int *a = new int[n+1];

  for(int i=0;i<=n;i++){
    a[i]=-1;
  }

  return minStepsHelper(a,n);
}

int main(){
  int n;
  cout<<"Enter number->";
  cin>>n;

  cout<<"Min Steps to 1 from "<<n<<" is "<< minSteps(n)<<endl;
  return 0;
}
