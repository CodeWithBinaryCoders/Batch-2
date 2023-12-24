#include <stdio.h>
int main()
{
    int x = 5;
    
    int y = ++x;

    printf("x is %d and y is %d\n", x, y);

    int a = 7;

    printf("%d\n", ++a);
    printf("%d\n", a);

    return 0;
}