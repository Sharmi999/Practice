//print two numbers from an array which is equal to the target sum.
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the value of n";
    cin>>n;
    int *arr = new int[n];
    bool flag = false;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of sum";
    cin>>sum;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
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
