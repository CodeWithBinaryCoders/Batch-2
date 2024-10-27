#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;

    scanf("%d%d", &row, &col);

    int **arr = malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
        arr[i] = malloc(col * sizeof(int));

    // take input

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);

    // print the array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // free the memory

    for (int i = 0; i < row; i++)
        free(arr[i]); // free each row

    free(arr); // free the array

    return 0;
}
