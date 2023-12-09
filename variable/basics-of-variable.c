#include <stdio.h>
int main()
{
    int x; // declaring a variable
    x = 7; // assigning value 5 to variable x

    printf("The stored value is %d\n", x);

    // int a;
    // int b;
    // a = 6;
    // b = 10;

    // int a, b;
    // a = 6;
    // b = 10;

    int a = 6, b = 10;

    printf("Value of a is %d & value of b is %d\n", a, b);

    // int p = q = 6; -> this is an error

    int p, q;

    p = q = 10; // try to avoid

    printf("value of p and q is %d and %d", p, q);


    return 0;
}

