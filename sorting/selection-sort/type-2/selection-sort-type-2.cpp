#include <iostream>
#include <algorithm> // for swap

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[j], arr[i]);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for (int i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}
