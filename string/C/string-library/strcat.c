#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "to be added";
    char destination[100] = "Here the source string is ";

    strcat(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
