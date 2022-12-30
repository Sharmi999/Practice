#include<iostream>
using namespace std;
int main()
{
    int arr[8]={23,45,12,34,55,43,18,77};
    int sum;
    sum=0;
    for(int i=0;i<=7;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<" ";
    return 0;
}