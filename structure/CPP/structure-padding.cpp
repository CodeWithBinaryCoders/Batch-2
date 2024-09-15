#include <iostream>
using namespace std;

struct Test
{
    char a; // 1 byte
    int b; // 4 bytes
    char c; // 1 byte
};

int main()
{
    cout << "Hypothetical size of Test: " << sizeof(char) + sizeof(int) + sizeof(char) << endl;
    cout << "Size of Test: " << sizeof(Test) << endl;

    return 0;
}
