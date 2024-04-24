#include <stdio.h>
#include <limits.h> // or #include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &n);

    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
        if (arr[i] < minimum)
            minimum = arr[i];

    printf("%d\n", minimum);

    return 0;

}
