#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 25, 36, 45, 26, 85};

    for(int i=0; i<6; i++)
    {
        cout << *(arr + i) << " ";
    }

   /*cout << (*arr) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 8) << endl;*/
    return 0;
}