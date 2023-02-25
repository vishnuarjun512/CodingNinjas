#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem=0;
    int bin=0;

    while(n>0)
    {
        rem=n%2;
        
        bin=bin+rem*10;

        n=n/2;
        

    }
    cout<<bin;
}