// print two numbers from an array which is equal to the target sum.
#include<iostream>
using namespace std;
int main()
{
    int n,sum,i,j;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    bool flag = false;
    i=0;
    j=i+1;
    
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    cout<<"Enter the value of sum";
    cin>>sum;
    while(i<n)
    {
        i++;
        while(j<n)
        {
            j++;
            if(arr[i]+arr[j] == sum)
            {
                flag = true;
                cout<<"The two numbers of target sum are "<< arr[i] <<"  " <<arr[j]<< endl;
            }
        
        }
    }

    if (flag == false)
    {
        cout << "No two numbers found";
    }
    
    return 0;
}