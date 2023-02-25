#include<iostream>
using namespace std;
class Student{
    private:
       

    public:
        
        int age;
        char *name;
        Student(int age,char *name)
        {
            this->age=age;
            //Shallow copy for name
            // this->name=name;

            //Deep copy
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
        }


        /// Copy Constructor
        Student(Student const &s)
        {
            this->age=s.age;
            //Shallow copy
            // this->name=s.name;

            this->name=new char[strlen(s.name)+1];
            strcpy(this->name,s.name);

        }
        Student()
        {
            cout<<"Default Constructor called"<<endl;       
        }

        void display()
        {
            cout<<"Name=>"<<name<<endl;
            cout<<"Age=>"<<age<<endl;
        }

};