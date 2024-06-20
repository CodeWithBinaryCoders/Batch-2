// no parameter but return value is present

#include <iostream>
using namespace std;

int sum(); // function prototype

int main()
{
    int ans = sum();
    cout << "Sum = " << ans << endl; // call the function, no parameter is provided

    return 0;
}

int sum() // function definition
{
    int a, b; // local varible
    cout << "Enter two integers : ";
    cin >> a >> b; // input

    return a + b;
}