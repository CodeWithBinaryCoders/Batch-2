#include <iostream>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";

    str1 += str2; // str1 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
