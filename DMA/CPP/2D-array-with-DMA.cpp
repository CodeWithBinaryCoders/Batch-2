#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cin >> row >> col;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
        arr[i] = new int[col];

    // take input

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    // print the array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // free the memory

    for (int i = 0; i < row; i++)
        delete[] arr[i]; // free each row

    delete[] arr; // free the array

    return 0;
}
