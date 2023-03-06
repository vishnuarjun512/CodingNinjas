#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> q;

    for(int i=0;i<10;i++) 
    {
        q.push(i);
    }
    
    cout<<q.size()<<" ";

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<q.size();
    


}