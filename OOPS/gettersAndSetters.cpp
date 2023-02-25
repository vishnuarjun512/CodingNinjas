#include<iostream>
using namespace std;
#include "studentClass.cpp"


class College{

    public:
        char CollegeName[20];
        int CollegeID;
        void setCollegeDetails(char name[],int id)
        {
            int i;
            for(i=0;name[i]!='\0';i++)
            {
                CollegeName[i]=name[i];
            }
            CollegeID=id;
        }

        
};

int main()
{
    Student *s1=new Student();
    s1->age=23;
    s1->rollNumber=101;
    int n;
    cout<<"Enter Secret number -> "<<endl;
    cin>>n;
    s1->setSecretNumber(n);

    cout<<"Secret number->"<<s1->getSecretNumber()<<endl;
    s1->display();

    College c1;
    char input[20];
    int cid;
    cin>>cid;
    cin.getline(input,20);
    c1.setCollegeDetails(input,cid);

    cout<<"College Name-"<<c1.CollegeName<<endl;
    cout<<"College ID -"<<c1.CollegeID;


}