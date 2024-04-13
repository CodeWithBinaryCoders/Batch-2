// Consider 64 bit system

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << sizeof (a) << endl; // 4
    cout << sizeof (45) << endl; // 4
    cout << sizeof (5.8) << endl; // 8 as double
    cout << sizeof (5.8f) << endl; // 4 as float
    cout << sizeof (char) << endl; // 1
    cout << sizeof ('A') << endl; // 1
    cout << sizeof ((int)5.9) << endl; // 1 as typecasted to int
    return 0;
}