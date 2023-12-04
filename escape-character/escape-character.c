#include <stdio.h>

int main()
{
    printf("Hello\nWorld\n\n"); // '\n' -> new line
    // Hello
    // World

    printf("Hello\tWorld\n\n"); // '\t' -> horizontal tab
    // Hello    World

    printf("Hello\vWorld\n\n"); // '\v' -> vertical tab
    // Hello
    //      World

    printf("\a"); // '\a' -> audible alert

    printf("\\"); // '\\' -> \

    printf("\n\n");

    printf("\\n"); // \n

    printf("\n\n");

    printf("My name is 'Avik' .\n\n"); // My name is 'Avik' .
    printf("My name is \"Avik\" .\n"); // My name is "Avik" .

    return 0;
}