#include <iostream>
using namespace std;

int main() {
    int bs,ts;
    char grade;
    double hra,da,pf;
    cin>>bs;
    
    
    hra = 20/100*bs;
    da = 50/100*bs;
    pf = 11/100*bs;
    cin>>grade;
    
    if(grade=='A'){
        ts=bs+hra+da+1700-pf;
        cout<<ts<<endl;
    }
    else if(grade=='B'){
        ts=bs+hra+da+1500-pf;
        cout<<ts<<endl;
    }
    else if(grade=='C'){
        ts=bs+hra+da+1300-pf;
        cout<<ts<<endl;
    }
    else{
        cout<<"Invalid input";
    }
    
    //Write your code here

    return 0;
}