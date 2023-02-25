
#include <iostream>
#define MULTIPLY(a,b) a*b
using namespace std;

int main()
{
    // int i=65;       
    // int *x;
    // x=&i;

    // char *c=(char*)x;
    // cout<<"x* =>"<<*x<<endl;
    // cout<<"*c =>"<<*c<<endl;
        
    char c='B';
    char *p=&c;

    int *pi=(int*)p;

    
    
    cout<<"hello how are you";
    cout<<*p<<endl;
    cout<<*pi<<endl;
    return 0;
}

    

    
    
