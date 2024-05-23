#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string : ");
    gets(str);

    printf("You entered: ");
    puts(str);

    return 0;
}

// Enter a string : Binary Learn in great.
// You entered: Binary Learn in great.