//Fibonacci Series for N numbers  //

#include<iostream>
using namespace std;

int main()
{
    int i,no, first=0, second=1, next;

    first=0;
    second=1;

    cout<<"No of terms to Display :: ";
    cin>>no;
    for(i=0; i<no; i++)
    {
        cout<<" "<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    cout<<"\n";

    return 0;
}