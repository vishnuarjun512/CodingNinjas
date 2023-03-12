#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	for(int i=0;i<100;i++)
	{
		v.push_back(i+1);
		cout<<"Capacity of vector->"<<v.capacity()<<endl;
	}
	//cout<<"Third Element->"<<v[3]<<endl;
	
	//v[3]=1000;

	//cout<<"After Change Third Element->"<<v.at(3)<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v.at(i)<<endl;
	}

	//v.pop_back();

	/*for(int i=0;i<v.size();i++)
	{
		cout<<v.at(i)<<endl;
	}
	*/

	//Dynamic Creation
	//vector<int> *dv=new vector<int>();

	cout<<"Size of vector->"<<v.size()<<endl;
	return 0;
}
