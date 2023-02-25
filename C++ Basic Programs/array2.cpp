#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }

    cout<<"Largest element is "<<largest<<endl;


}