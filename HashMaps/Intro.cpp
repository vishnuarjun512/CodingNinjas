#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
  unordered_map<string,int> map;
  
  //Insert 
  pair<string, int> p("ABC",1);
  map.insert(p);
  //or 
  map["vishnu"] = 2580;


  //Find or Access elements
  cout<< map["vishnu"]<<endl;
  cout<< map.at("ABC") <<endl;
  // cout<< map.at("ghi") <<endl;       // Returns an Exception "Key not found"
  cout<< map["ghi"] <<endl;           // If key not found "Adds Default value 0 to the key"
  map["ghi"] = 2;

  //Check Presence
  if(map.count("ghi")<0){
    cout<<"ghi is present"<<endl;
  }else{
    cout<<map.at("ghi")<<endl;
  }


  //Check size
  cout<<"Map size ->"<<map.size()<<endl;

  //Erase and Check
  map.erase("ghi");
  if(map.count("ghi")>0){
    cout<<"Present"<<endl;
  }else{
    cout<<"Not present"<<endl;
  }

  
  return 0;
}
