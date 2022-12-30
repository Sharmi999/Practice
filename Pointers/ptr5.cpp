//move all the negative numbers to the left of array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of n";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            cout<<arr[i]<<" ";
        }
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j]>=0)
        {
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}