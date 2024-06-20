// no return but parameter is present

#include <iostream>
using namespace std;

void sum(int, int); // function prototype

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // input

    sum(a, b); // a, b are actual parameters

    return 0;
}

void sum(int a, int b) // a, b are formal parameters
{
    cout << "Sum = " << a + b << endl;
}

