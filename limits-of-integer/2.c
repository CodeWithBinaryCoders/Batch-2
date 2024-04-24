#include <stdio.h>
#include <limits.h>

int main()
{
    int x = INT_MAX;
    int y = x + 1;
    int z = INT_MIN;

    printf("x = %d\n", x);   
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    
    return 0;
}
