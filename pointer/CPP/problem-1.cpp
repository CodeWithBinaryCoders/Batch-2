#include <iostream>
using namespace std;
int main()
{
    int n;
    
    int *ptr = &n;
    int **pptr = &ptr;

    // cin >> n;
    cin >> **pptr;

    cout << n << endl;

    return 0;
}

