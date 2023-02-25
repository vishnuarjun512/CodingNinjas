#include<stdio.h>
int nextGreaterElement(int a[],int b[],int i,int n)
{
    for(int j=i+1;j<n;j++){
        if(a[i]<b[j])
        {
            b[j]=-1;
            return j-i;
        }
    }
    return -1;
}
int main()
{
    int a[]={31,23,33,21,18,20,45};
    int b[]={31,23,33,21,18,20,45};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        b[i]=nextGreaterElement(a,b,i,size);
    }

    for(int i=0;i<size;i++)
    {
        printf("\n%d = %d",a[i],b[i]);
    }
}