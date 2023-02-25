#include<iostream>
using namespace std;

class ComplexNumber{

    public:
        int real,imag;

        void display()
        {
            cout<<this->real<<"+i"<<this->imag<<endl;
        }

        ComplexNumber()
        {
            this->real=0;
            this->imag=0;
        }

        ComplexNumber(int r,int i)
        {
            this->real=r;
            this->imag=i;
        }

        void add(ComplexNumber c1,ComplexNumber c2){
            this->real=c1.real+c2.real;
            this->imag=c1.imag+c1.imag;
        }

        void multiply(ComplexNumber const &c1,ComplexNumber const &c2)
        {
            this->real=(c1.real*c2.real)-(c1.imag*c2.imag);
            this->imag=(c1.real*c2.imag)+(c1.imag*c2.real);
        }
};
int main()
{
    ComplexNumber c1(3,4),c2(5,2);
    c1.display();
    c2.display();

    ComplexNumber Add,Mult;
    Add.add(c1,c2);
    cout<<"Add->";
    Add.display();

    Mult.multiply(c1,c2);
    cout<<"Multiplied->";
    Mult.display();

    
    


    return 0;
}