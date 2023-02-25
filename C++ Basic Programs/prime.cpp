#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=2;
    bool div=false;
    while(d<n){
        if(n%d==0){
        
            div=true;
        }
        d=d+1;
    }
    if(!div){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    
}