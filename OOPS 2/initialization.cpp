#include<iostream>
using namespace std;

class Student{
    public:
        int age;
        const int rollnumber;
        int &x;//Reference Variable

        //Initialization List (for const integer)
        Student(int r,int a) : age(a),rollnumber(r), x(this->age)
        { 
        }


        void display()
        {
            cout<<"Age=>"<<age<<endl;
            cout<<"rollnumber=>"<<rollnumber<<endl;
            cout<<"Reference Variable(x)=>"<<x<<endl;
        }
};
int main()
{
    Student s1(3111,23);  
    Student s2(3115,32);

    s1.display();
    s2.display();
   

}