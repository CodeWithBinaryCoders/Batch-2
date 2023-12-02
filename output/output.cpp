#include <iostream>
using namespace std;

int main()
{
    cout << "Hello ";
    cout << "World";
    cout << endl;
    cout << endl;

    cout << "Hello\n";
    cout << "World";
    cout << endl;
    cout << endl;

    cout << "Hello";
    cout << endl;
    cout <<"World";
    cout << endl << endl;

    cout << "Hello\nWorld" << endl << '\n';

    cout << "Hello" << endl << "World" << "\n";

    cout << '\n' << "Hello World" << endl;

    return 0;
}

/*
OUTPUT
------

Hello World

Hello
World

Hello
World

Hello
World

Hello
World

Hello World

*/