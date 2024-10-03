#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));

    // check if memory is allocated successfully
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    printf("\n");

    return 0;
}
