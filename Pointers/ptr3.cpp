//reverse an array
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int *arr= new int[size];
    cout<<"Enter the elements";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int j=(size-1); j>=0; j--)
    {
       cout<<arr[j]<<" ";
    }
    return 0;
}
