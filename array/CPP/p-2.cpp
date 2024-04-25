#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = INT_MIN;

    for (int i : arr)
        maximum = max(i, maximum);

    cout << maximum << endl;
    
    return 0;
}
