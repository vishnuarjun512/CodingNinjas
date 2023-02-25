#include <iostream>
using namespace std;
#include "studentClass.cpp"

int main()
{
    char name[] = "Vishnu";
    Student s1(20, name);
    s1.display();

    name[3] = 'b';

    Student s2(23, name);
    s1.display();
    s2.display();



   

    // name[3]='h';
    Student s5(s1);
    s5.display();


    //  Student s3;
    // char name2[]="Nisha";
    // s3.name=name2;
    // s3.age=10;

    // name2[0]='M';
    // Student s4;
    // s4.name=name2;   // Also Shallow copy (Changes the string of s3.name too!!)
    // s4.age=12;

    // s3.display();
    // s4.display();
    
}