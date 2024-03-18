#include <stdio.h>

int main()
{
    int a = 5, b = 6;

    printf("Before swapping : a = %d, b = %d\n", a, b); // 5, 6

    // swapping logic
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping : a = %d, b = %d\n", a, b); // 6, 5

    return 0;
}

