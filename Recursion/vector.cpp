#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);

    int *b=new int[size/2];

    for(int i=0,j=0;i<size;i++,j+=2)
    {
        b[i]=a[j]+a[j+1];   
    }
}