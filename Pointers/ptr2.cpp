//store n numbers in an array and print the maximum and minimum among those using pointer
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of n";
   cin>>n;
  int *arr= new int[n];
  int max;
  int min;

   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
    max = arr[0];
    min = arr[0];

for(int i=0; i<n; i++)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
    if(max<arr[i])
    {
        max=arr[i];
    }
}  
cout<<"The maximum number is "<<max<<endl;
cout<<"The minimum number is "<<min<<endl;
return 0;
}         
    