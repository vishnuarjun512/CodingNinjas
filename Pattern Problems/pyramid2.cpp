#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        int val=i;
        while(j<=i)
        {
            cout<<val;
            val++;
            j++;
        }
        j=2*i-2;
        while(j>=i)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}