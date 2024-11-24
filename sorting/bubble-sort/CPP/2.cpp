#include <iostream>

using namespace std;

void bubbleSort(int *arr, int n); // function prototype

int main()
{
    int n; // size
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // array declaration

    cout << "Enter the element(s) of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n); // function call

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}

void bubbleSort(int *arr, int n) // function definition
{
    for (int pass = 1; pass <= n - 1; pass++) // handling pass
    {
        bool flag = false; // to check if any swapping is done in this pass

        for (int i = 0; i <= n - pass - 1; i++) // handling traversal
            if (arr[i] > arr[i + 1]) // check if they are in correct order
            {
                flag = true; // swap happened

                // swap
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

        if (!flag) // if no swapping is done in this pass
            break; // exit the loop
    }
}
