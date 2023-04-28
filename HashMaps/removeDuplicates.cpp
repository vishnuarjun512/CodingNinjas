#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

vector<int>  removeDuplicates(int *arr,int n){
  vector<int> ans;
  unordered_map<int , bool> map;
  for(int i=0;i<n;i++){
    if(map.count(arr[i])> 0){
      continue;
    }  
    map[arr[i]]=true;
    ans.push_back(arr[i]);
  }
  return ans;
}
  
int main(){
  int a[] = {1,2,2,3,4,1,5,3,3,5};
  int n = 10;
  unordered_map<int,bool> map;
  for(int i=0;i<n;i++){
    cout<< a[i] << " ";
  }
  cout<<endl;
  vector<int> v= removeDuplicates(a,n);

  for(int i=0;i<v.size();i++){
    cout<< v.at(i) << " ";
  }   
  cout<<endl; 
  return 0;
}
