#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {
    
    for(int i=start;i<=end;i+=step)
    {
        int c=(5/9)*(i-32);
        cout<<i<<"\t"<<c<<endl;
    }
}

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);
    

}


