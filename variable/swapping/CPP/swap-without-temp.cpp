#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 7;

    // Before swapping, a = 5, b = 7
    cout << "Before swapping, a = " << a << ", b = " << b << endl;

    // swapping logic
    a = a + b; // a = 12, b = 7
    b = a - b; // a = 12, b = 5
    a = a - b; // a = 7, b = 5

    cout << "After swapping, a = " << a << ", b = " << b << endl;
    
    return 0;
}