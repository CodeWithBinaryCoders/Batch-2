#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &n);

    int minimum = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] < minimum)
            minimum = arr[i];

    printf("%d\n", minimum);

    return 0;

}
