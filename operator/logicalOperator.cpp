#include <iostream>
using namespace std;
int main()
{
    bool x = true;
    int y = false;

    char c1 = 'p';
    char c2 = 'r';

    cout << (x == false || x == true) << endl; // 1
    cout << (c1 == 'q' && c2 == 'p') << endl; // 0
    cout << !(c1 == 'q' && c2 == 'p') << endl; // 1

    return 0;
}



