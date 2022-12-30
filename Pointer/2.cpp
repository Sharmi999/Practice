//write a program to store n numbers in an array and then print the average of it.
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    float average;
    sum=0;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    average=(sum/(n*1.0));
    cout<<average<<" ";
    return 0;
     
}