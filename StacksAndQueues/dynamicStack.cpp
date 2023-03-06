#include<iostream>
using namespace std;
class dStack{
    int *data;
    int *next;
    public:
    dStack()
    {
        this->data=NULL;
        this->next=NULL;
    }
};

int main()
{
    dStack d;
    return 0;
}