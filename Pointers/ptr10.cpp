//sum the corresponding elements of two equal sized array.
#include <iostream>
using namespace std;

int main()
{ 
    int *arr1 = new int[5];
    int *arr2 = new int[5];
    int *arr3 = new int[5];

    for (int i=0; i<5; i++) 
    {
        cin>>arr1[i];
        cin>>arr2[i];
    
        arr3[i]=arr1[i]+arr2[i];
    }

    for (int i=0; i<5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}