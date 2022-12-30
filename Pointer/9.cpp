//find the first repeating number from an array.
#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<< "Enter the value of n";
    cin>>n;
    int arr[n];
    i=0;
    j=i+1;
    while(i<n)
    {
    cin>>arr[i];
    i++;
    }
    while(i<n)
    {
        i++;
        while(j<n)
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
