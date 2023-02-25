/*
Output n=4

4321
4321
4321
4321 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=1;
        int var=n;
        while(j<=n)
        {
            cout<<var;
            j++;
            var--;
            
        }
        cout<<endl;
        i++;
    }
    
}