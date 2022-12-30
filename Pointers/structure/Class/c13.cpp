//You are given an array of unique integers salary where salary[i] is the salary of the ith employee. Return the average salary of employees excluding the minimum and maximum salary.
#include<iostream>
using namespace std;
int maximum(int *ptr,int size)
{
    int res,i;
    res = ptr[0];
    i=0;
    while(i<size)
    {
        i++;
        if(ptr[i]>res)
        {
            res = ptr[i];
        }
    }
    return res;
}
int minimum(int *ptr,int size)
{
    int res,i;
    res = ptr[0];
    i=0;
    while(i<size)
    {
        i++;
        if(ptr[i]<res)
        {
            res = ptr[i];
        }
    }
    return res;
}
int main()
{
    int n,i;
    int *ptr;
    float average;
    int maxi,mini;
    cout<<"Enter the value of n:  ";
    cin>>n;
    int sum = 0;
    ptr = new int[n];
    i=0;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the salary of person "<<i+1<<" ";
        cin>>ptr[i];
    }
    maxi = maximum(ptr,n);
    mini = minimum(ptr,n);
    cout<<"Maximum is:"<< maxi <<endl;
    cout<<"Minimum is:"<< mini << endl;
    for(int i=0; i<n; i++)
    {
        sum = sum + ptr[i];
    }
    sum = sum - (maxi + mini);
    n = (n-2);
    average = sum/(n*1.0);
    cout<<"The average salary is: "<<average;
    return 0;


}