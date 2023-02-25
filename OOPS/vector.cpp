#include<iostream>
#include<vector>    
using namespace std;


int main()
{
    vector<int> v;
    vector<int> *dv=new vector<int>();          //Dynamic allocation
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(20);

    // v[1]=15;
    // v[3]=30;
    // v[4]=45;

    // v.push_back(60);
    // v.push_back(75);

    // v.pop_back();
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    //     v.pop_back();
    // }

    for(int i=0;i<100;i++)
    {
        cout<<"Capacity->"<<v.capacity()<<endl;
        v.push_back(i+1);
        cout<<"Size->"<<v.size()<<endl;

    }




    cout<<"size->"<<v.size()<<endl;



    return 0;

}