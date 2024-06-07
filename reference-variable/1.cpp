#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int &ref = n; // creates lvalue reference

    ref = 10; // changes the value of n
    cout << n << endl;

    int &ref2 = ref;
    ref2 = 15; // changes the value of n
    cout << n << endl;

    cout << endl;

    cout << "Memory addresses" << endl << endl;  
    cout << &n << endl;
    cout << &ref << endl;
    cout << &ref2 << endl;

    return 0;
}

