//taking input in an array using while loop
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int *ptr;
    cout<<"Enter the value of n: ";
    cin>>n;
    ptr = new int[n];
    i=0;
    while(i<=n-1)
    {
        cin>>ptr[i];
        cout<<ptr[i];
        i++;
    }
    return 0;


}