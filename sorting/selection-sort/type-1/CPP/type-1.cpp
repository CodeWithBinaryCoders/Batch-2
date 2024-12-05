#include <iostream>

using namespace std;

void selectionSort(int *, int);
int findMinValueIndex (int *, int, int);

int main()
{
    int n; // size
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // array declaration

    cout << "Enter the element(s) of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n); // function call

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}

void selectionSort(int *arr, int n)
{
    for (int pass = 1; pass <= n - 1; pass++) // handling pass
    {
        int minValueIndex = findMinValueIndex(arr, pass - 1, n - 1); // find the index of the minimum value

        // swap
        int temp = arr[pass - 1]; // pass - 1 is the starting index of the unsorted part
        arr[pass - 1] = arr[minValueIndex];
        arr[minValueIndex] = temp;
    }
}

int findMinValueIndex (int *arr, int start, int end)
{
    int minValueIndex = start; // initialize the index of the minimum value

    for (int i = start + 1; i <= end; i++) // handling traversal
        if (arr[i] < arr[minValueIndex]) // check if the current element is less than the minimum value
            minValueIndex = i; // update the index of the minimum value

    return minValueIndex;
}

