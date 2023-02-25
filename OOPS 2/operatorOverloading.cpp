#include<iostream>
using namespace std;
#include "fractionClass.h"

int main()
{
    Fraction f1(2,5);
    Fraction f2(1,4);

    // Fraction F3 = f1*f2;
    // Fraction F4 = f1/f2;
    // F3.display();
    // F4.display();

    f1.display();
    ++f1;
    f1.display();

    Fraction f3=f1+f2;

    f3.display();

    if(f1==f1){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }

    return 0;
}