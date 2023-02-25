#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int t=i;
        int j=1;
        while(j<=i)
        {
            cout<<t;
            j++;
            t++;
        }
        cout<<endl;
        i++;
    }
}