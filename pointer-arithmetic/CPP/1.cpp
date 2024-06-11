#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7, 6, 3, 8, 2};

    int *ptr = arr; // int *ptr = &arr[0];

    cout << *ptr << endl; // 7
    cout << ptr[3] << endl; // 8

    ptr = ptr + 1; // ptr++;
    cout << *ptr << endl; // 6
    cout << ptr[3] << endl; // 2

    ptr[15] = 63;
    cout << ptr[15] << endl; // 63

    return 0;
}

