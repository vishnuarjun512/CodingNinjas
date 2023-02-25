#include<iostream>
using namespace std;
#include "polynomialClass.cpp"

int main()
{
    Polynomial p1;

    p1.setValues(3);
    
    Polynomial p2;
    p2.setValues(4);

    p1.display();
    p2.display();

    cout<<"After----->"<<endl;
    Polynomial p3=p1-p2;
    p1.display();
    p2.display();
    p3.display();
}