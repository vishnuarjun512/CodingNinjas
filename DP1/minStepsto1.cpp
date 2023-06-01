#include <climits>
#include<iostream>
using namespace std;
int minSteps(int n){
  if(n==1){
    return 0;
  }

  int reduceBy1=INT_MAX;
  int divideBy2=INT_MAX;
  int divideBy3=INT_MAX;

  reduceBy1 = minSteps(n-1);
  if(n%3==0)
    divideBy3 = minSteps(n/3);

  if(n%2==0) divideBy2 = minSteps(n/2);

  return 1+min(reduceBy1,min(divideBy3,divideBy2));
}

int main(){
  int n;
  std::cin>>n;
  std::cout<<"\nMin steps to 1->"<<minSteps(n)<<std::endl;
  return 0; 
}
