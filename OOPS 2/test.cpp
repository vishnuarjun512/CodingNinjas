#include<iostream>
using namespace std;

class Student {
    public :

        int rollNumber;

        int getRollNumber() {
            return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
    return 0;
}