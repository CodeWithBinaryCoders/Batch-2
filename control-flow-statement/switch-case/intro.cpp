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
        break;

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

    // if (n == 1)
    //     cout << "Hi" << endl;
    // else if (n == 2)
    //     cout << "Hello" << endl;
    // else if (n == 3)
    //     cout << "Hey" << endl;
    // else if (n == 4)
    //     cout << "Morning" << endl;
    // else if (n == 5)
    //     cout << "Greet" << endl;
    // else
    //     cout << "I am still learning" << endl;

    return 0;
}
