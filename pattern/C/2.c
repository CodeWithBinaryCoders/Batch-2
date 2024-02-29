/*
    Print the following pattern. Row and col will be taken from user.
    * * * * *
    * * * * *
    * * * * *
*/

#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row and col values respectively : ");
    scanf("%d%d", &row, &col);

    for (int i = 1; i <= row; i++) // rows
    {
        // print "* " for five times
        for (int j = 1; j <= col; j++) // cols
        {
            printf("* ");
        }

        // go to new line
        printf("\n");
    }

    return 0;
}
