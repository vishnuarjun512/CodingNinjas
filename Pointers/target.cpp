#include<iostream>
#include<stdbool.h>
using namespace std;

bool found(int a[],int n,int x)
{
    if(a[0]==x)
    {
        return true;
    }
    if(n==0 && a[n]!=x)
    {
        return false;
    }
    
    bool res=found(a+1,n-1,x);
    return res;
}

   
int main()
{  
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int *arr=new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter target element"<<endl;
    cin>>x;
    bool res=found(arr,n,x);

    if(res)
    {
        cout<<"true";
    }
    else{
        cout<<"false";

    }
}