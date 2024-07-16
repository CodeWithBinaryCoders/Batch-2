#include <iostream>
using namespace std;

int globalVar = 5; // global variable

void change()
{
    globalVar = 10; // global variable
}

int main()
{
    change();
    
    cout << globalVar << endl; // 10

    return 0;
}
