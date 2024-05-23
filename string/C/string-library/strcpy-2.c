#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Alik Agarwala";
    char destination[50] = "Hello World";

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
