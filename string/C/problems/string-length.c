#include <stdio.h>

int main()
{
    char str[100];

    gets(str);

    int i = 0;

    while('\0' != str[i]) // while (str[i])
        i++;

    printf("Length = %d\n", i);

    return 0;
}

// Avi
// Length = 3