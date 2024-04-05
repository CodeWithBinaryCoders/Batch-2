/*

   *
  ***
 *****
*******
*******
 *****
  ***
   *

*/

#include <stdio.h>

int main()
{
    int row;

    // take the row number as input
    printf("Enter the number of row(s) : ");
    scanf("%d", &row);
    /*** print first half of the pattern ***/

    // run one loop for row(s) from i = 1 to i = row
    for (int i = 1; i <= row; i++)
    {
        // print spaces (row - i) times
        for (int j = 1; j <= row - i; j++)
            printf(" ");

        // print '*'
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        // print one new line
        printf("\n");
    }

    /*** print second half of the pattern ***/

    // run one loop for row(s) from i = row to i = 1
    for (int i = row; i >= 1; i--)
    {
        // print spaces (row - i) times
        for (int j = 1; j <= row - i; j++)
            printf(" ");

        // print '*'
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        // print one new line
        printf("\n");
    }

    return 0;
}
