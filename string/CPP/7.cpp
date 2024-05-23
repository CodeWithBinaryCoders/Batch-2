#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (char ch : str)
        cout << ch;

    cout << endl;

    return 0;
}
