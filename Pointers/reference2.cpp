#include <iostream>
using namespace std;
int& fun(int& np)
{
    np++;
    return np;
}
int main()
{
    int n=10;
    int & np = n;
    
    int name=fun(np);
    name++;
    cout<<np<<endl;
    cout<<name<<endl;
    return 0;
}