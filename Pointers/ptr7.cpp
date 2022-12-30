//find the first repeating number from an array.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the value of n";
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i];
                return 0;
            }
        }
    }
   cout<<"No repeating element present";
   return 0;
}
