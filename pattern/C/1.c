/*
    Print the following pattern :
    * * * * *
    * * * * *
    * * * * *
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++) // rows
    {
        // print "* " for five times
        for (int j = 1; j <= 5; j++) // cols
        {
            printf("* ");
        }

        // go to new line
        printf("\n");
    }

    return 0;
}
