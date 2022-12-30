//store enr and rgn of n number of students
#include<iostream>
using namespace std;

typedef struct Students 
{
    int enr;
    int rgn;
}cap;

int main()
{
    int n;
    cout<<"Enter the total no. of students: ";
    cin>>n;
    cap students[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the enrollment number of the student " << i + 1<< ": ";
        cin>>students[i].enr;
        cout<<"Enter the registration number of the student " << i + 1<< ": ";
        cin>>students[i].rgn;
    }
    for(int i=0; i<n; i++)
    {
        cout<<students[i].enr<<" "<<students[i].rgn<<endl;
    }
    return 0;
}