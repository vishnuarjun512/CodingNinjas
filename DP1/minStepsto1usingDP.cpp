#include<iostream>

int minSteps(int n){
  int * a = new int[n+1];
  for(int i=0;i<=n;i++){
    a[i]=-1;
  }

  int steps = 0;

  while(n>1){
    steps++; 
    if(n%3==0){
      n=n/3;
    }else if(n%2==0){
      n=n/2;
    }else{
      n=n-1;
    }
  }
  return steps;
}

int main(){
  
  int n;
  std::cin>>n;

  std::cout<<"Min steps to 1 from "<<n<<" is "<< minSteps(n)<<std::endl;
  return 0;
}
