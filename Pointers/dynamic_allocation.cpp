#include<iostream>
using namespace std;


//i(left)  a(right) - editing commands
// I(insert at beginning) A(insert at the end of line)

// x(Delete) r(Replace)
// W(start) E(end) - of the word
// W(start) E(end) - of the word
// y(copy)  yiw(copy word) yy(copy enter line) 2yy(copy 2 lines)
// d(cut) diw(cut word) dd(cut entire line) 2dd(cut 2 lines)

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Max is "<<max<<endl;

    cout<<"Deleting the Heap array"<<endl;
    delete [] a;            // Array deletion 
    cout<<endl;
    
    return 0;
}






