#include <stdio.h>
int main()
{
    int x = 5;
    int y = 7;

    printf("%d\n", x < y || x == 9); // 1
    printf("%d\n", x < y && x == 9); // 0
    printf("%d\n", !(x < y && x == 9)); // 1
    return 0;
}

