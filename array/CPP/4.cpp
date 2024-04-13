// Consider 64 bit system

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << sizeof (a) << ", "; // 4
    cout << sizeof (a + 3) << ", "; // 4
    cout << sizeof (45) << ", "; // 4
    cout << sizeof (5.8) << ", "; // 8 as double
    cout << sizeof (5.8f) << ", "; // 4 as float
    cout << sizeof (char) << ", "; // 1
    cout << sizeof ('A') << ", "; // 1
    cout << sizeof ((int)5.9) << endl << endl; // 4 as typecasted to int

    cout << sizeof a << ", "; // 4
    cout << sizeof a + 3 << ", "; // 7 as 4 + 3
    cout << sizeof 45 << ", "; // 4
    cout << sizeof 5.8 << ", "; // 8 as double
    cout << sizeof 5.8f << ", "; // 4 as float
    cout << sizeof (char) << ", "; // 1
    cout << sizeof 'A' << ", "; // 1
    cout << sizeof ((int)5.9) << endl; // 4 as typecasted to int
    return 0;
}

