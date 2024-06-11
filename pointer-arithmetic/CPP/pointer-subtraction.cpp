#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {9, 5, 6, 4, 3};

    int *ptr1 = arr; // int *ptr1 = &arr[0];
    int *ptr2 = arr + 3; // int *ptr2 = &arr[3];

    cout << ptr2 - ptr1 << endl; // 3
    cout << ptr1 - ptr2 << endl; // -3

    return 0;
}

