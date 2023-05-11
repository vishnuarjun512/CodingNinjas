#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int board[11][11];

bool isPossible(int n,int row,int col){
  //Check Above Column
  for(int i=row-1;i>=0;i--){
    if(board[i][col]==1){
      return false;
    }
  }

  //Check Left Upper Diagonal
  for(int i=row-1,j=col-1; i>=0 && j>=0;i--,j--){
    if(board[i][j]){
      return false;
    }
  }

  //Check Right Upper Diagonal
  for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
    if(board[i][j]==1)
      return false;
  }
  return true; 
}

void nQueenHelper(int n,int row){
  if(row==n){
    //We have reached some solution
    //Print the Matrix now 
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<board[i][j]<< " ";
      }
      cout<<endl;
    }
    cout<<endl;
    return;
  }

  //Place at all possible positions
  for(int j=0;j<n;j++){
    //Checking if I can place 0 then going in and returning it if not possible
    if(isPossible(n,row,j)){
      board[row][j] = 1;
      nQueenHelper(n,row+1); 
      board[row][j] = 0;
    }  
  } 
}

void nQueen(int n){
  memset(board,0,11*11*sizeof(int));
  nQueenHelper(n,0);
}

int main(){
  nQueen(9);
  cout<<"Final Answer->"<<endl;
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        cout<<board[i][j]<< " ";
    }
    cout<<endl;
    }
  cout<<endl;
  return 0;
}
