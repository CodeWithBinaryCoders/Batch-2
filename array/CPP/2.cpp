#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};

    int length = sizeof (arr) / sizeof (int);

    // for (int i = 0; i < sizeof (arr) / sizeof (int); i++)
    for (int i = 0; i < length; i++)
        cout << arr[i] << ' ';

    cout << endl;

    return 0;
}