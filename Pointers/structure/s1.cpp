#include <iostream>
using namespace std;

typedef struct Bag
{
    float freq1;
    int freq2;
}var;

int main()
{
    var bag1, bag2;

    bag1.freq1 = 10.8765;
    bag1.freq2 = 20;

    bag2.freq1 = 30.97543;
    bag2.freq2 = 40;

    cout << "The items of bag1 are: " << bag1.freq1 << " " << bag1.freq2<<endl;
    cout << "The items of bag2 are: " << bag2.freq1 << " " << bag2.freq2;

    return 0;
}