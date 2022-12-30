#include <iostream>
using namespace std;

class Student
{
    public:
        int enr;
        int rgn;
};

int main()
{
    int n;
    cout<<"Enter the total no. of students: ";
    cin>>n;
    Student info[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the registration number of the student "<< i+1<<" "<<endl;
        cin>>info[i].rgn;
        cout<<"Enter the enrollment number of the student "<< i+1 <<" "<<endl;
        cin>>info[i].enr;
    }
    for(int i=0; i<n; i++)
    {
        cout<<info[i].rgn<<" "<<info[i].enr<<endl;
    }
    return 0;
}

