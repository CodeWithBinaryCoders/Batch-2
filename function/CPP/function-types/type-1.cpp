// no return, no parameter

#include <iostream>
using namespace std;

void sum(); // function prototype

int main()
{
    sum(); // call the function, no parameter is provided

    cout << "Program end" << endl;

    return 0;
}

void sum() // function definition
{
    int a, b; // local varible
    cout << "Enter two integers : ";
    cin >> a >> b; // input
    cout << "Sum is " << a + b << endl;

    // return;
    // It's optional
}