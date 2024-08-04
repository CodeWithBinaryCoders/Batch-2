#include <stdio.h>

void changeValues(int arr[], int n) // int arr[] is equivalent to int *arr
{
    for (int i = 0; i < n; i++)
        arr[i] = 0;
}

int main()
{
    int arr[5] = {9, 5, 6, 4, 9};

    changeValues(arr, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
