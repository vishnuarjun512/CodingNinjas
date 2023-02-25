#include<iostream>
using namespace std;
#include "studentClass.cpp"



int main()
{
    int n;

    //Static Allocation of Object
    Student s1;
    s1.age=45;
    s1.rollNumber=101;
    cout<<"Static Allocation"<<endl;
    // cout<<"Using . operator for s1 age="<<s1.age<<endl;
    // cout<<"test=>"<<s1.rollNumber;


    s1.display();
    cout<<"Secret Number->"<<s1.getSecretNumber()<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //Dynamic Allocation of Object
    Student *s2=new Student();
    (*s2).age= 23;
    cout<<"Dynamic allocation"<<endl;
    cout<<"Using . with (*s2) age ="<<(*s2).age<<endl;

        //or we can use ->
    
    s2->rollNumber=45;
    cout<<"Using -> s2 Rollnumber="<<s2->rollNumber<<endl;
    cout<<"Size of Student Class->"<<sizeof(s1)<<endl;
    s2->display();
    cout<<"Secret Number->"<<s2->getSecretNumber()<<endl;
    



    return 0;
}