/*There is a function signFunc(x) that returns:
1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.
Return signFunc(product).*/
#include<iostream>
using namespace std;
int signFunc(int x)
{
    int res;
    if(x>0)
    {
        res = 1;
    }
    if(x == 0)
    {
        res = 0;
    }
    if(x < 0)
    {
         res = -1;
    }
    return res;

}
int main()
{
    int n,pdt,i;
    int *ptr;
    cout<<"Enter the value of n: ";
    cin>>n;
    ptr = new int[n];
    pdt = 1;
    i=0;
    while(i<n)
    {
        cin>>ptr[i];
        i++;
    }
    while(i<n)
    {
        pdt = pdt * ptr[i];
        i++;
    }
    cout<<signFunc(pdt)<<endl;
    return 0;
}

