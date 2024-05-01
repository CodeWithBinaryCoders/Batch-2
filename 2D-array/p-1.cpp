#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    cout << endl;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int temp;
            cin >> temp;

            if (!(temp % 2))
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
}
