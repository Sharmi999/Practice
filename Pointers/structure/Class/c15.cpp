//You are given an array of unique integers salary where salary[i] is the salary of the ith employee. Return the average salary of employees excluding the minimum and maximum salary.
#include<iostream>
using namespace std;
int maximum(int *ptr,int size)
{
    int res;
    res = ptr[0];
    for(int i=0; i<size; i++)
    {
        if(ptr[i]>res)
        {
            res = ptr[i];
        }
    }
    return res;
}
int minimum(int *ptr,int size)
{
    int res;
    res = ptr[0];
    for(int i=0; i<size; i++)
    {
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
    while(i<n)
    {
        cout<<"Enter the salary of person "<<i+1<<" ";
        cin>>ptr[i];
        i++;
    }
    maxi = maximum(ptr,n);
    mini = minimum(ptr,n);
    cout<<"Maximum is:"<< maxi <<endl;
    cout<<"Minimum is:"<< mini << endl;
    while(i<n)
    {
        sum = sum + ptr[i];
        i++;
    }
    sum = sum - (maxi + mini);
    n = (n-2);
    average = sum/(n*1.0);
    cout<<"The average salary is: "<<average;
    return 0;


}