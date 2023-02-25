#include<iostream>
#include "fractionClass.h"
using namespace std;
int main()
{
    Fraction f1(1,2);
    f1.display();


    Fraction f3=++f1;

    f1.display();
    f3.display();
    ++(++f3);
    f1.display();
    f3.display();
    return 0;

}