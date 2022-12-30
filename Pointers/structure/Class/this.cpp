#include <iostream>
using namespace std;

class Student
{
    int enr;
    int rgn;
    public:
        Student()
        {
            this->enr = -1;
            rgn = -1;
        }

        Student(int enr, int rgn)
        {
            this->enr = enr;
            this->rgn = rgn;
        }
};
