#include <iostream>
using namespace std;

struct Test
{
    char a; // 1 byte
    int b; // 4 bytes
    char c; // 1 byte
};

struct NewStructure
{
    char a; // 1 byte
    char c; // 1 byte
    int b; // 4 bytes
};

int main()
{
    cout << "Hypothetical size of Test: " << sizeof(char) + sizeof(int) + sizeof(char) << endl;
    cout << "Size of Test: " << sizeof(Test) << endl;

    cout << "Hypothetical size of NewStructure: " << sizeof(char) + sizeof(char) + sizeof(int) << endl;
    cout << "Size of NewStructure: " << sizeof(NewStructure) << endl;

    return 0;
}
