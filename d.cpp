//sum of first n natural numbers
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a positive integer"<<endl;
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        sum=sum+i;

    }
cout<<sum<<endl;
return 0;

}