#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    scanf("%2d", &x);

    fflush(stdin); // clear the input buffer

    scanf("%2d", &y);
    
    printf("%d, %d\n", x, y);

    return 0;
}
