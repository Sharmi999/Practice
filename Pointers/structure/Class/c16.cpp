//Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).
#include<iostream>
using namespace std;
int main()
{
    int l,h,i;
    cout<<"Enter the low value integer: ";
    cin>>l;
    cout<<"Enter the high value integer: ";
    cin>>h;
    i=0;
    while(i<=h)
    {
        i++;
        if(i%2 != 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}