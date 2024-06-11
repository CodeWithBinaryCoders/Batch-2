#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {7, 6, 5};

    cout << arr[2] << endl; // 5

    cout << 2[arr] << endl; // 5

    arr[2] = 12;
    cout << 2[arr] << endl; // 12

    2[arr] = 63;
    cout << arr[2] << endl; // 63

    return 0;
}

