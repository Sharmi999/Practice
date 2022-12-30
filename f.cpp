//   Find Sum and Average of n numbers using  //

#include<iostream>
using namespace std;

int main()
{
    int i,n,x,sum=0;
    float avg;

    cout<<"Enter the no. of numbers: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter number: ";
        cin>>x;

        sum+=x;
    }

    avg=(float)sum/(float)n;

    cout<<"\nSum of "<<n<<" Numbers :: "<<sum;

    cout<<"\nAverage of "<<n<<" Numbers :: "<<avg;

    return 0;
}