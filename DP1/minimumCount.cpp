#include <climits>
#include<iostream>
#include<math.h>
using namespace std;

int minCount(int n){
  if(sqrt(n) - floor(sqrt(n)) == 0 )
    return 1;
  
  if(n==0 || n==1 || n==2 || n==3){
    return n;
  }
  
  int ans;
  for(int i=1;i*i<=n;i++){
    ans = 1 + minCount(n-i*i);
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<minCount(n)<<endl;
  return 0;
}
