/*

  *   *
 * * * * *
*   *   *

*/

#include <stdio.h>

int main()
{

    int noOfStars;

    // take number of star(s) as input
    printf("Enter the number of star(s) : ");
    scanf("%d", &noOfStars);

    // run loop for 3 rows
    for (int i = 1; i <= 3; i++)
    {
        // place '*' or blank space for each row
        for (int j = 1; j <= noOfStars; j++)
        {
            // check for logic whether to put '*' or blank space
            if ((i + j) % 4 == 0 || (i == 2 && j % 2 == 0))
                printf("*");
            else
                printf(" ");
        }

        // print one new line at the end of each row
        printf("\n");
    }

    return 0;
}
