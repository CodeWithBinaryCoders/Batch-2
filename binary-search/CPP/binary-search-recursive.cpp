#include <iostream>

using namespace std;

int binarySearch(int *, int, int, int); // function prototype

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

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        cout << "Element not found in the array" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

int binarySearch(int *arr, int low, int high, int key) // function definition
{
    // base condition
    if (low > high) // if the low index is greater than the high index
        return -1; // return -1

    int mid = low + (high - low) / 2; // calculate the middle index

    if (key == arr[mid]) // if the key is found at the middle index
        return mid;// return the index

    if (key < arr[mid]) // if the key is less than the middle element
        return binarySearch(arr, low, mid - 1, key); // search in the left half

    // if the key is greater than the middle element
    return binarySearch(arr, mid + 1, high, key); // search in the right half
}

