#include<iostream>
#include "fractionClass.h"
using namespace std;
int main()
{
    Fraction f1(1,2);

    Fraction f2(1,2);
    f1.display();
    f2.display();

    (f2+=f1)+=f1;
    f2.display();

}