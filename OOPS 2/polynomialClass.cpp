#include<iostream>
using namespace std;

class Polynomial{
    int *degArray;
    int capacity;

    public:
        //Default constructor
        Polynomial()
        {
            capacity=5;
            degArray=new int[capacity];
        }

        Polynomial(int m)
        {
            capacity=m;
            degArray=new int[capacity];
        }



        

        //SetCoefficient
        void setValues(int t)
        {
            int totalValues=t;
            // cout<<"Total values to be assigned in the polynomial"<<endl;
            // cin>>totalValues;
            while(totalValues--)
            {
                int deg;
                deg=rand()%5;
                // cout<<"deg->"<<deg<<endl;
                int cE;
                cE=rand()%10;
                // cout<<"co-efficient->"<<cE<<endl;

                degArray[deg]=cE;

            }
        }

        //Copy constructor

        //Copy assignment constructor

        //print function
        void display()
        {
            std::cout<<"Array-> ";
            for(int i=0;i<capacity;i++)
            {
                if(degArray[i]!=0){
                    std::cout<<degArray[i]<<"x"<<i<<" ";
                }
            }
            std::cout<<endl;
            // std::cout<<"Capacity->"<<capacity<<endl;
        }

        

        // + Operator
        Polynomial operator+(Polynomial const &p1)
        {
            int m=min(this->capacity,p1.capacity);
            Polynomial pNew(m);
            for(int i=0;i<m;i++)
            {
                int temp=this->degArray[i];
                pNew.degArray[i]=temp+p1.degArray[i];
                
            }
            return pNew;
        }


        // - Operator

        Polynomial operator-(Polynomial const &p1)
        {
            int m=min(this->capacity,p1.capacity);
            Polynomial pNew(m);
            for(int i=0;i<m;i++)
            {
                int temp=this->degArray[i];
                pNew.degArray[i]=temp-p1.degArray[i];
                
            }
            return pNew;
        }

        // * Operator
};