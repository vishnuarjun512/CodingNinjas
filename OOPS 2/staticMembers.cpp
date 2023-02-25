#include<iostream>
using namespace std;

class Student{
    static int totalNumberOfStudents;
    public:
        int age,rollNumber;


    Student()
    {
        totalNumberOfStudents++;
    }

    void setInfo(int r,int a)
    {
        this->rollNumber=r;
        this->age=a;
    }

    void display()
    {
        cout<<"Age -> "<<this->age<<" Rollnumber -> "<<this->rollNumber<<endl;
    }

    int getRollNumber(){
        return rollNumber;
    }

    static int getTotalStudents()
    {
        return totalNumberOfStudents;
    }

    ~Student()
    {
        cout<<"Destructor called"<<endl;
        totalNumberOfStudents-=1;
    }
};

int Student :: totalNumberOfStudents=0;

int main()
{
    
    Student *s = new Student[10];
    int age,roll;
    for(int i=0;i<10;i++)
    {
        age=rand()%50;
        roll=rand()%1000;
        s[i].setInfo(roll,age);
    }

    for(int i=0;i<10;i++)
    {
        s[i].display();
    }


    //For total number of Students
    // cout<< Student :: totalNumberOfStudents <<endl;
    cout <<Student ::getTotalStudents()<<endl;

    delete [] s;
    //For Static outside public
    cout <<Student ::getTotalStudents()<<endl;

    return 0;
}