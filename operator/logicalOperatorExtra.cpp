#include <iostream>
using namespace std;
int main()
{
    cout << (5 || 6) << endl;

    cout << (5 && 7) << endl;

    cout << (0 && 6) << endl;

    cout << (6 && 0) << endl;

    cout << (6 && 6) << endl;

    cout << !(6 && 6) << endl;

    return 0;
}