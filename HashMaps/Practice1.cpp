#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int,int> m;
    // pair <int,int> p=make_pair(2,3);
    // m.insert(p);    
    // pair <int,int> q=make_pair(4,3);
    // m.insert(q);    
    // pair <int,int> r=make_pair(5,3);
    // m.insert(r);    


    // cout<< m[2] <<endl;
    // cout<< m.at(2) <<endl;
    
    // cout<< m.size() <<endl;


    int arr[]={1,1,1,1,1,2,3,3,3,3,3,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        m[arr[i]]++;
    }

    int max=INT_MIN;
    int min=INT_MAX;
    int minElement;
    cout<<"      Element    Frequency"<<endl;
    for(auto i:m)
    {
        if(max<i.second){
            max=i.first;
        }
        if(min>i.second)
        {
            min=i.second;
            minElement=i.first;
        }
        cout<<"\t"<< i.first << "\t     " << i.second << endl;
    }

    cout<<"Maximum number in the Hashmap is ->"<< max <<endl;
    cout<<"Minimum number in the Hashmap is ->"<< minElement <<endl;
    cout<<sizeof(m)<<endl;
    cout<<size<<endl;
    cout<<m.size()<<endl;
    return 0;
}
