#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[10];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        cout<<"The "<<i<<"th Element is "<<a[i]<<endl;
    }


}