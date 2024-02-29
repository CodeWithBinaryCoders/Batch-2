#include <stdio.h>

int main()
{
    int count = 1; // initialize with 1

doItAgain:
    printf("%d\n", count); // print the value of count
    count++; // increment the value of count
    // printf("%d\n", count++);

    // do repeat
    if (count <= 10)
        goto doItAgain;

    return 0;
}

