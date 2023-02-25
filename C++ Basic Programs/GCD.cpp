#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,smaller;
    cin>>a>>b;
    a=smaller;
    int gcd=0,div=1;
    if(a>b){
        b=smaller;
    }
    else{
        
        if(a%div==0 && b%div==0){
            gcd=div;
            div=div+1;
        }
        cout<<gcd<<endl;
    }
    




}