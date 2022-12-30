//find the indicies of key from an array.
#include<iostream>
using namespace std;
int main()
{
    int n,key,i,j;
    bool flag= false;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    cout<<"Enter the value of key";
    cin>>key;
    j=0;
    while(j<n)
    {
        j++;
        if( arr[j] == key)
        {
            cout<<"The index of the key is "<< j << " " << endl;
            flag=true;
        }
    }
    if(flag ==false)
    {
    cout<<"index of key not found";
    }
    return 0;
}