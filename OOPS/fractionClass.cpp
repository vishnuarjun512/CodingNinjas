#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Fraction{
    public:
        int num;
        int den;
        
        Fraction(){
            cout<<"initialized"<<endl;
            this->num=0;
            this->den=0;
        }
        void display(){
            cout<<num<<"/"<<den<<endl;
        }
        void setValues(int n,int d)
        {
            this->num=n;
            this->den=d;
        }

        void result(int a,int b)
        {
            int gcd=1;
            int m=min(a,b);

            for(int i=1;i<=m;i++)
            {
                if(a%i==0 && b%i==0){
                    gcd=i;
                }
            }

            this->num=a/gcd;
            this->den=b/gcd;
        }

        void add(Fraction ptr1,Fraction ptr2){
            int newNum=(ptr1.num*ptr2.den)+(ptr2.num*ptr1.den);
            int newDen=ptr1.den*ptr2.den;

            result(newNum,newDen);
            // cout<<"Result->"<<newNum<<"/"<<newDen<<endl;
        }

        void multiply(Fraction f1,Fraction f2)
        {
            int newNum=f1.num*f1.num;
            int newDen=f1.den*f2.den;

            result(newNum,newDen);
        }
};

int main()
{
    Fraction F1,F2,Add,Mult;
    int n,d;
    cin>>n>>d;
    F1.setValues(n,d);

    cin>>n>>d;
    F2.setValues(n,d);

    clock_t start=clock();

    F1.display();
    F2.display();


    Add.add(F1,F2);
    std::cout<<"\nAdd Result->";
    Add.display();

    
    Mult.multiply(F1,F2);
    std::cout<<"\nMult Result->";
    Mult.display();
    clock_t end=clock();
    double time=((double)(end-start)/CLOCKS_PER_SEC);

    cout<<"\nTotal time taken=>"<<fixed<<time<<endl;
    



    return 0;
}