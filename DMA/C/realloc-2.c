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
        ptr[i] = i + 1;

    ptr = realloc(ptr, 3 * sizeof(int));

    if (!ptr)
    {
        printf("Memory reallocation failed\n");
        return 2;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    printf("\n");

    return 0;
}
