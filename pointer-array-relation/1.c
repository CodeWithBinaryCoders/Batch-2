#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%u\n", arr); // prints address of arr[0]
    printf("%u\n", arr + 1); // prints address of arr[1]
    printf("%u\n", arr + 2); // prints address of arr[2]
    printf("%u\n", arr + 3); // prints address of arr[3]
    printf("%u\n", arr + 4); // prints address of arr[4]

    return 0;
}

