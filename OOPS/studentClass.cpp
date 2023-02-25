#include<iostream>
using namespace std;
class Student{
    public:
        int rollNumber;
        int age;    
        void display()
        {
            cout<<"Function call : "<<endl;
            cout<<"Age=>"<<age<<endl;
            cout<<"Rollnumber=>"<<rollNumber<<endl;
        }
        
        void setSecretNumber(int a)
        {
            if(a<0)
            {
                cout<<"The number is Negaitve\nNot possible"<<endl;
                return;
            }
            secretNumber=a;
        }

        int getSecretNumber()
        {
            return secretNumber;
        }
    private:
        int secretNumber;

};
class Product{
    int id;
    int weight;
    char name[100];
};