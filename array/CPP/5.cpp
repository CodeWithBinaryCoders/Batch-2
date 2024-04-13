#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i : arr)
        cout << i << ' ';

    cout << endl << endl;

    for (auto i : arr)
        cout << i << ' ';

    cout << endl << endl;

    char a[4] = {'A', 'V', 'I', 'K'};

    for (char i : a)
        cout << i << ' ';

    cout << endl << endl;

    for (auto i : a)
        cout << i << ' ';

    cout << endl;

    return 0;
}
