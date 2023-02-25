#include<iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"Enter row and column=>"<<endl;
    cin>>row>>column;

    int **a=new int*[row];
    for(int i=0;i<row;i++)
    {
        a[i]=new int[column];
        for(int j=0;j<column;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=2;j<column;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }

    for (int i=0;i<row;i++)
    {
        delete [] a[i];
    }
    delete [] a;

    cout<<"hey wtf"<<endl;
    return 0;
    
}
