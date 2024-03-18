// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// take the row number as input from the user

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row; // user input

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}