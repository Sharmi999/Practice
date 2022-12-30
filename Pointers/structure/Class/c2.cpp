#include <iostream>
using namespace std;

class Student
{
    int enr;
    int rgn;
    int fee;
    public:
        Student()
        {
            enr = -1;
            rgn = -1;
            fee = -1;
        }

        Student(int value1, int value2, int value3)
        {
            enr = value1;
            rgn = value2;
            fee = value3;
        }

        Student(Student &s)
        {
            enr = s.enr;
            rgn = s.rgn;
            fee = s.fee;
        }

        void display()
        {
            cout << enr << " " << rgn  << " " << fee << endl;
        }

        void take_input(int a)
        {
            cout<<"Enter the registration number of the student ";
            cin>>rgn;
            cout<<"Enter the enrollment number of the student ";
            cin>>enr;
            cout << "Enter the Fee of the student: ";   
            cin >> fee;
        }
};

int main()
{
    Student s1, s2(102, 206, 5000);

    s1.display();
    s2.display();

    s1 = s2;

    s1.display();
    s2.display();
}

