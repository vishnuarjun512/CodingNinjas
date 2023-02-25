#include<iostream>
using namespace std;
int main()
{
    int i=400;
    int & j=i;
    cout<<j<<endl;

    i++;
    cout<<j<<endl;

    j++;
    cout<<i<<endl;
   
    int h=50;
    j=h;
    cout<<j<<endl;
    return 0;

}