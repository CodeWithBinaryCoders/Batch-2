#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7, 6, 3, 8, 2};

    int *ptr1 = arr; // int *ptr1 = &arr[0];
    int *ptr2 = arr + 3; // int *ptr2 = &arr[3];

    cout << (ptr1 + ptr2) << endl; // error

    return 0;
}

