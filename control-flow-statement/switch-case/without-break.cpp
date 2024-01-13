#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Hi" << endl;
        break;

    case 2:
        cout << "Hello" << endl;
        // no break is there

    case 3:
        cout << "Hey" << endl;
        break;

    case 4:
        cout << "Morning" << endl;
        break;

    case 5:
        cout << "Greet" << endl;
        break;

    default:
        cout << "I am still learning" << endl;
    }

    return 0;
}