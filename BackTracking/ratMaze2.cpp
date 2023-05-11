#include<iostream>
using namespace std;

int main(){
  int a[][3]={
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };


  for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    for(int j=0;j<sizeof(a[0])/sizeof(a[0][0]);j++){
      cout<< a[i][j] << " ";
    }
    cout<<endl;
  }
    
  return 0;
}
