#include<iostream>
using namespace std;
#define N 9

bool searchEmpty(int a[][N],int &row,int &col){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(a[i][j] == 0){
        row = i;
        col = j;
        return true;
      }
    }
  } 

  return false;
}

bool isSafeInRow(int a[N][N],int row,int col,int key){
  for(int i=0;i<N;i++){
    if(a[row][i]==key)
      return false;
  }
  return true;
}

bool isSafeCol(int a[N][N],int row ,int col,int key){
  for(int i=0;i<N;i++){
    if(a[i][col] == key){
      return false;
    }
  }
  return true;
}

bool isSafeGrid(int a[N][N],int row,int col,int key){
  int rowFactor = row - (row%3);
  int colFactor = col - (col%3);
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(a[i+rowFactor][j+colFactor] == key){
        return false;
      }
    }
  }
  return true;
}

bool isSafe(int a[N][N],int row,int col,int key){
  if(isSafeInRow(a,row,col,key) && isSafeCol(a, row, col, key) && isSafeGrid(a, row, col, key))
    return true;
  return false;
}

bool sudokuSolver(int a[][N]){
 //Search for the 0
  int row,col;
  if(!searchEmpty(a,row,col)){
    return true; 
  }

  for(int i=1;i<=9;i++){
    if(isSafe(a,row,col,i)){
      a[row][col] = i;
      if(sudokuSolver(a)){
        return true;
      }
      a[row][col] = 0;
    }
  }

  return false;
}

int main(){
  int a[N][N];
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin>>a[i][j];
    }
  }
  cout<<endl;

  cout<< sudokuSolver(a)<<endl;
  cout<<endl;
  
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout<<a[i][j]<< " ";
    }
    cout<<endl;
  }
}
