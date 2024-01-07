#include <iostream>
using namespace std;
int main()
{
    bool check1 = true;

    if (check1) // if (check == true)
        cout << "Proceed" << endl;
    else
        cout << " Discard" << endl;

    bool check2 = false;

    if (!check2)
        cout << "Discard" << endl;
    else
        cout << " Proceed" << endl;
        
    return 0;
}

