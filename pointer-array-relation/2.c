#include <stdio.h>
int main()
{
    int arr[5] = {1, 6, 4, 9, 2};

    printf("%d\n", *arr); // prints value of arr[0]
    printf("%d\n", *(arr + 1)); // prints value of arr[1]
    printf("%d\n", *(arr + 3)); // prints value of arr[3]


    printf("%d\n", *arr + 1); // prints value of arr[0] + 1
    printf("%d\n", *arr + 3); // prints value of arr[0] + 3

    return 0;
}

