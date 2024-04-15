#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;

    for (int i : arr)
        if (!(i % 2))
            sum += i;

    cout << sum << endl;
    return 0;
}

