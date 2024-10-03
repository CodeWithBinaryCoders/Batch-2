#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int));

    *ptr = 73;

    printf("Value of ptr: %d\n", *ptr);

    free(ptr); // free the memory

    // ptr is now a dangling pointer

    printf("%d\n", *ptr); // garbage value

    // some other code
    // the previous memory is not needed anymore

    return 0;
}
