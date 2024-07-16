#include <iostream>
using namespace std;

void change(int *ptr)
{
    *ptr = 10;

}

int main()
{
    int n = 5 ;

    change(&n);

    cout << "Value of n is " << n << endl;

    return 0;
}
