#include<iostream>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

        DynamicArray(){
            data=new int[5];
            nextIndex=0;
            capacity=5;
        }

        // SHALLOW COPY
        // DynamicArray(DynamicArray const &d)
        // {
        //     this->data=d.data;
        //     this->nextIndex=d.nextIndex;
        //     this->capacity=d.capacity;
        // }

        //DEEP COPY
        DynamicArray(DynamicArray const &d)
        {
            this->data=new int[d.capacity];
            for(int i=0;i<d.nextIndex;i++)
            {
                this->data[i]=d.data[i];
            }
            this->capacity=d.capacity;
            this->nextIndex=d.nextIndex;
        }



        void add(int element){
            if(nextIndex==capacity){
                // doubleArray function
                int *newData=new int[2*capacity];
                for(int i=0;i<capacity;i++)
                {
                    newData[i]=data[i];
                }
                delete [] data;
                data=newData;
                capacity =2*capacity;
            }
            data[nextIndex]=element;
            nextIndex++;
        }

        int get(int i)
        {
            if(i<nextIndex)
            {
                return data[i];
            }
            else{
                return -1;
            }
        }

        void changeElement(int i,int element)
        {
            if(i<nextIndex){
                data[i]=element;
            }
            else if(i==nextIndex){ 
                add(element);
            }else{
                cout<<"Array index out of Bound"<<endl;
            }
        }

        void display()
        {
            for(int i=0;i<nextIndex;i++)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
        
};
int main()
{
    // addElement(newElement) Function needed;
    DynamicArray D;
    D.add(10); 
    D.add(20); 
    D.add(30); 
    D.add(40); 
    D.add(50); 
    D.add(60); 
    D.add(70); 
    D.add(80); 
    D.display();


    DynamicArray D2(D);
    D2.changeElement(2,100);
    D.display();
    D2.display();
    return 0;
}