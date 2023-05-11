#include<iostream>
using namespace std;
#define N 9
bool sudokuSolver(int a[][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(searchEmpty(a,i,j)){
        
      }
    }
  } 
}

int main(){
  int a[N][N];
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin>>a[i][j];
    }
  }

  cout<<(sudokuSolver(a));

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout<<a[i][j]<< " ";
    }
  }
}
