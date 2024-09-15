#include <stdio.h>

typedef union Test
{
    char a;  // 1 byte
    int b;   // 4 bytes
    float f; // 4 byte
} Test;

int main()
{
    Test t1;

    t1.a = 'A';

    t1.b = 10;

    t1.f = 10.5;

    printf("t1.a: %c\n", t1.a);
    printf("t1.b: %d\n", t1.b);
    printf("t1.f: %f\n", t1.f);

    return 0;
}