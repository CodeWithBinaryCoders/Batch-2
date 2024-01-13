#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 5:
    case 7:
    case 9:
        cout << "Yeppi!!!" << endl;
    default:
        cout << "Happy" << endl;
    }

    // if (n == 5 || n == 7 || n == 9)
    //     cout << "Yeppi!!!" << endl;

    return 0;
}