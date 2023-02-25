#include<iostream>
using namespace std;

class Student{
    public:
        int age;
        int rollNumber;
        Student()
        {
            cout<<"Constructor 1 called"<<endl;
        }

        Student(int a)
        {
            this->age=a;
        }
        Student(int a,int r)
        {
            this->age=a;
            this->rollNumber=r;   
        }
        void display(){
            cout<<"The age is->"<<age<<endl;
            cout<<"The Rollnumber is->"<<rollNumber<<endl;
        }

        //Destructors - To destroy the Object ie s1,s2,...etc
        //           -->Same name as Class
        //           -->No return type
        //           -->No input argument

        ~Student(){
            cout<<"Destructed Called"<<endl;
        }

};

int main()
{
    Student s1(10);
    Student s2(20,2001);

    Student *s3=new Student(s2);        //Copy constructor called

    s1.display();
    //s2=s1;                            //No constructor called
    s2.display();
    s3->display();

    Student s4(*s3);                     //Copy constructor called

    Student s5=s4;
    cout<<"s5:";
    s5.display();

    delete s3;                          //Deleting object(Destructor)
}
