#include<iostream>
using namespace std;

class Student{
    private:
        int secretNumber;

    public:
        int age;

        Student()   //Default Constructor
        {
            cout<<"Default Constructor called\nAlso init() done"<<endl;
            age=secretNumber=0;
        }

        Student(int age) // Parameterized Constructor
        {
            cout<<"Constructor 2 called"<<endl;
            this->age=age; // this is a pointer //which hold the address of s1,s2 ,...etcc
        }

        Student(int a,int s)
        {
            cout<<"Dynamic Constructor called"<<endl;
            age=a;
            secretNumber=s;            
        }

        void display()
        {
        cout<<"Age->"<<age<<endl;
        cout<<"Secret Number->"<<secretNumber<<endl;
        }
        
        void getSecretNumber(int n)
        {
            secretNumber=n;
        }
   
};

int main() 
{
    cout<<"Default Constructors Demo"<<endl;
    Student s1; 
    //When declared s1 a Special Operation takes place inside class automatically.
    // That is s1.Student() -> This is called as Constructors
    //                      -> It has No return type
    //                      -> No input arguments   
    //                      -> is a Default Construcor 
    //                      -> Initializes the elements inside the class to some Garbage value
    s1.display();


    cout<<endl;
    cout<<"Parameterized Constructors Demo"<<endl;
    Student s2(20);
    s2.display();

    int n;
    cout<<"Enter your Secret number"<<endl;
    s2.getSecretNumber(n);
    cout<<endl;
    cout<<"Parameterized Construtor with Dynamic Allocation"<<endl;

    Student *s3=new Student(10,3111);
    s3->display();

}