#include <stdio.h>
int main()
{
    int n;


    int *ptr = &n; // pointer variable ptr is pointing to the address of n
    int **pptr = &ptr; // pointer variable pptr is pointing to the address of ptr

    // scanf("%d", &n); -> scanf() accepts the address of the variable n

    scanf("%d", *pptr); // *pptr is the value of ptr, so it accepts the address of the variable n

    printf("%d\n", n);

    return 0;
}

