// parameter and return value both are present

#include <iostream>
using namespace std;

int sum(int, int); // function prototype

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b; // input

    int ans = sum(a, b); // a, b are actual parameters

    cout << "Sum = " << ans << endl;

    return 0;
}

int sum(int a, int b) // a, b are formal parameters
{
    return a + b;
}

