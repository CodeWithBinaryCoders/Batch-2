#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    scanf("%c", &a);

    fflush(stdin); // clear the input buffer
    
    scanf("%c", &b);

    printf("%c, %c\n", a, b);

    return 0;
}
