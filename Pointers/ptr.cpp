#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr= new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>ptr[i];
    } 
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<5; j++)
    {
        cout<< *(ptr+j)<< " ";
    }
    return 0;
}