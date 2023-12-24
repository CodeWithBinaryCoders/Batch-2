#include <stdio.h>
int main()
{
    int x = 5; // x = 5

    int y = x++; // y = 5 and x = 6

    printf("x is %d & y is %d\n", x, y);

    int a = 5;

    printf("%d\n", a++);
    printf("%d\n", a);

    return 0;
}