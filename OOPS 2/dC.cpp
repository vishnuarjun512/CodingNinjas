#include<iostream>
using namespace std;

class DynamicArray{
    
    int *a;
    int next;
    int capacity;

    public:

        DynamicArray()
        {
            capacity=5;
            a=new int[capacity];
            next=0;
        }

        //Deep Copy
        DynamicArray(DynamicArray const &d)
        {
            this->a=new int[d.capacity];
            for(int i=0;i<d.next;i++)
            {
                this->a[i]=d.a[i];
            }
            this->capacity=d.capacity;
            this->next=d.next;
        }

        //Operator overloading
        void operator=(DynamicArray const &d)
        {
            this->a=new int[d.capacity];
            for(int i=0;i<d.next;i++)
            {
                this->a[i]=d.a[i];
            }
            this->capacity=d.capacity;
            this->next=d.next;
        }

        void addElement(int element)
        {
            if(next<capacity)
            {
                a[next++]=element;
            }
            else{
                cout<<"Array limit reached when adding "<<element<<endl;
                int *newData=new int[2*capacity];
                for(int i=0;i<next;i++)
                {
                    newData[i]=a[i];
                }
                capacity*=2;
                delete [] a;
                a=newData;
                addElement(element);   
            }
        }

        void displayParameters()
        {
            cout<<"Next=>"<<next<<endl;
            cout<<"Capacity->"<<capacity<<endl;
        }
        void display()
        {
            for(int i=0;i<next;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

        void showIndexNumber(int i)
        {
            cout<<"Element at "<<i<<" is ->"<<a[i]<<endl;
        }


        void changeElement(int i,int newElement)
        {
            if(i<next){

            a[i]=newElement;
            }
            else{
                addElement(newElement);
            }
        }
};


int main()
{
    DynamicArray D;
    D.display();
    D.displayParameters();

    D.addElement(1);
    D.addElement(2);
    D.addElement(3);
    D.addElement(4);
    D.addElement(5);
    D.addElement(6);
    D.addElement(7);
    D.addElement(8);
    D.addElement(9);
    D.addElement(10);
    D.addElement(11);
    D.addElement(12);
    D.addElement(13);
    D.addElement(14);
    D.addElement(15);

    D.display();
    D.displayParameters();

    DynamicArray D2=D;

    D2.display();

    D2.changeElement(2,5);
    D.display();
    D2.display();
    D2.displayParameters();
    return 0;
    
}