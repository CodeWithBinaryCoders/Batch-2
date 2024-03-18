#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a = 5, b = 6;

    cout << "Before swapping, a = " << a << ", b = " << b << endl;

    // swap
    swap(a, b);

    cout << "After swapping, a = " << a << ", b = " << b << endl;

    return 0;
}