//find the indicies of key from an array.
#include<iostream>
using namespace std;
int main()
{
    int n,key;
    bool flag= false;
    cout<<"Enter the value of n";
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of key";
    cin>>key;
    for(int j=0; j<n; j++)
    {
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