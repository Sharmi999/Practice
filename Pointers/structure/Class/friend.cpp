#include <iostream>
using namespace std;

class Teachers;
void function();

class Student
{
    int marks;
    int fee;
    public:
    friend Teachers;
    friend void function();
    Student()
    {
        marks = -1;
        fee = -1;
    }
    Student(int value1,int value2)
    {
        marks = value1;
        fee = value2;
    }
    Student( Student &s)
    {
        marks = s.marks;
        fee = s.fee;
    }


};

void function()
{
    Student s1;

    s1.marks = 100;
}

class Teachers
{
    int salary;
    public:
        Teachers()
        {
            salary = -1;
        }
        Teachers(int value1)
        {
            salary = value1;
        }
        Teachers(Teachers &t)
        {
            salary = t.salary;
        }

        void add_marks(Student sharmi)
        {
            sharmi.marks = 5000;
        }
};

int main()
{
    Teachers Ashmita;
    Student Sharmi;
}