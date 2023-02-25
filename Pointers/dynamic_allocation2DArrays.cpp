#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter row an column"<<endl; 
    cin>>row>>column;
    int **a=new int*[row];

    int max=-1,maxI,maxJ;
    for(int i=0;i<row;i++)
    {
        a[i]= new int[column];
        for(int j=0;j<column;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>max)
            {
                max=a[i][j];
                maxI=i;
                maxJ=j;
            }
        }
    }
    

    //Printing all elements
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=>"<<a[i][j]<<endl;
        }
    }

    cout<<"Maximum Element is=>"<<max<<" Stored in a["<<maxI<<"]["<<maxJ<<"]"<<endl;
    

    for(int i=0;i<row;i++)
    {
        delete [] a[i];
    }
    delete [] a;
    

    
    return 0;
}