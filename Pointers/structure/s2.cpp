// Write a program to store the enrollment number and registration number of 2 students and then print it
#include<iostream>
using namespace std;

typedef struct Students 
{
    int enr;
    int rgn;
}info;

int main()
{
    info student1,student2;
    cout<<"Enter the enrollment number of student1 ";
    cin>>student1.enr;
    cout<<"Enter the enrollment number of student2 ";
    cin>>student2.enr;
    cout<<"Enter the registration number of student1 ";
    cin>>student1.rgn;
    cout<<"Enter the regisration number of student2 ";
    cin>>student2.rgn;
    
    cout<<"the enrollment number of student1 "<<student1.enr<<endl;
    cout<<"the enrollment number of student2 "<<student2.enr<<endl;
    cout<<"the registration number of student1 "<<student1.rgn<<endl;
    cout<<"the registration number of student2 "<<student2.rgn<<endl;
    return 0;

}
