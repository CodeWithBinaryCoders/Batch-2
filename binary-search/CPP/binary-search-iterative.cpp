#include <iostream>

using namespace std;

int binarySearch(int *, int, int); // function prototype

int main()
{
    int n; // array size
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n]; // array of size n

    cout << "Enter the element(s) of the array : ";

    for (int i = 0; i < n; i++) // input element(s)
        cin >> arr[i];

    int key; // element to be searched

    cout << "Enter the element to be searched : ";
    cin >> key; // input the target element

    int result = binarySearch(arr, n, key);

    if (result == -1)
        cout << "Element not found in the array" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

int binarySearch(int *arr, int n, int key) // function definition
{
    int low = 0, high = n - 1; // initialization

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // calculate mid

        if (key == arr[mid]) // if element found
            return mid;

        if (key < arr[mid]) // if key is lesser than mid
            high = mid - 1; // update high

        else // if key is greater than mid
            low = mid + 1; // update low
    }

    return -1; // if element not found
}
