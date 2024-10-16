#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(5 * sizeof(int));

    if (!ptr)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        ptr[i] = i;

    ptr = realloc(ptr, 7 * sizeof(int));

    if (!ptr)
    {
        printf("Memory reallocation failed\n");
        return 2;
    }

    for (int i = 0; i < 7; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    printf("\n");

    return 0;
}
