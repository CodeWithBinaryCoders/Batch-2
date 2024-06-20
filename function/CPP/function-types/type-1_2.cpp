// no return, no parameter

#include <iostream>
using namespace std;

void func(); // function prototype

int main()
{
    func(); // call the function, no parameter is provided

    cout << "Program end" << endl;

    return 0;
}

void func() // function definition
{
    cout << "Hello, World!" << endl;
    return;
    cout << "Binary Learn" << endl; // dead code
}
