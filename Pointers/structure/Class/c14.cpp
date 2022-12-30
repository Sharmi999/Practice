//reverse a number
#include<iostream>
using namespace std;
int main()
{
    int num,res,i;
    cout<<"Enter the number: ";
    cin>>num;
    i=num;
    while(i!= 0)
    {
        i=i/10;
        res = i%10;
        cout<<res;
    }
    
    return 0;
}