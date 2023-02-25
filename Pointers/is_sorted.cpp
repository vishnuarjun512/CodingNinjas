#include<iostream>
#include<stdbool.h>
using namespace std;

bool isSorted(int a[], int n,int i)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(a[i]!=a[i+1])
    {
        return false;
    }
    bool ans=isSorted(a+1,n-1,i);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter array Size"<<endl;
    cin>>n;
    cout<<"Enter array elements";
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool res=true;
    int i=0;
    res=isSorted(arr,n,i);
    if(!res){
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
    }
    return 0;
}