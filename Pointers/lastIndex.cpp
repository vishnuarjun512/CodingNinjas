#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int x)
{
    if(n==1 and a[n-1]!=x)
        return -1;
    if(a[0]==x)
        return 0;
    else{
        return 1+firstIndex(a+1,n-1,x);
    }
}

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int *a=new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter Target Element=>";
    cin>>x;
    int result=firstIndex(a,n,x);
    cout<<result<<endl;
    return 0;
}
