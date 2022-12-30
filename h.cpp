//display the n terms of even natural number and their sum.
#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << " Input number of terms: ";
    cin >> n;
    cout << "\n The even numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i << " ";
        sum = sum+(2 * i) ;
    }
    cout << "\n The Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;
}