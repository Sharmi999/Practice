//add all the elements of an array.
#include <iostream>
using namespace std;

int add(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    return sum;
}

 int main()
{   
    int res;
    int *arr = new int[10];
    for(int i=0; i<10; i++)
    {
      cin>>arr[i];
    }

    res = add(arr);

    cout << "The result is " << res << endl;
    return 0;
}