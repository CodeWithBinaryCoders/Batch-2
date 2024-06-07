#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 7;

    int *ptr1 = &a;
    int *ptr2 = &b;

    // int temp = a;
    // a = b;
    // b = temp;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << a << " " << b << endl;

    return 0;
}

