// Reverse a Number

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the value of Num: ";
    cin >> num;

    while (num != 0)
    {
        int rem = num % 10;
        cout << rem;
        num = num / 10;
    }
    return 0;
}