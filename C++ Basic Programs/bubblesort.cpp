#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=a[i],minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                minIndex=j;
            }
        }
        a[minIndex]=a[i];
        a[i]=min;

    }
}
int main()
{
    int a[10];
    int n;
    cout<<"Enter size of Array: \n";
    cin>>n;
    cout<<"Enter array element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubbleSort(a,n);
    cout<<"\nSorted Array :"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;




}