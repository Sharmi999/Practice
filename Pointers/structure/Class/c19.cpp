//A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
// Given an array of numbers arr, return true if the array can form an arithmetic progression. Otherwise, return false.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int *ptr;
    int diff;
    bool flag = false;
    cout<<"Enter the value of n: ";
    cin>>n;
    ptr = new int[n];
    i=0;
    while(i<n)
    {
        cin>>ptr[i];
        i++;
    }
    while(i<n-1)
    {
        i++;
        if(ptr[i]-ptr[i+1]!=diff)
        {
            flag = true;
            cout<<"FALSE"<<endl;
            break;
        }
    }
    if(flag == false)
    {
        cout<<"TRUE";
    }
    return 0;
}