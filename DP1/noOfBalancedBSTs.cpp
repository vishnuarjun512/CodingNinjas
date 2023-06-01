#include<iostream>
using namespace std;
#define mod 1000000007
int balancedBSTs(int h,int *a){
  if(a[h]!=-1){
    return a[h];
  }
  if(h<=1)
    return 1;
  
  int x = balancedBSTs(h-1,a); 
  int y = balancedBSTs(h-2,a);
  
  int temp1 = (int)(((long)(x)*x)%mod);
  int temp2 = (int)((2*(long)(x)*y)%mod);
  a[h] = (temp1+temp2)%mod;
  // int ans =  (((x*x)%mod) + ((2*x*y)%mod))%mod;
  return a[h];
}


int main(){
  int n;
  cin>>n;
  int *a = new int[n+1];
  for(int i=0;i<=n;i++)
    a[i]=-1;
  cout<<balancedBSTs(n,a)<<endl;
  return 0;
}
