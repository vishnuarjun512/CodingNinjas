#include <iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i>0;i--)
    {
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=2*i-1;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main() {
    int num;
    cin>>num;
    print(num);
}





