#include <stdio.h>
int main()
{
    // take row and col value as input
    int row, col;
    scanf("%d%d", &row, &col);

    printf("\n");

    // declare the 2D array
    int arr[row][col];

    // take inputs

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);

    printf("\n");

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        
        printf("\n");
    }

    printf("\n");

    return 0;
}
