#include <stdio.h>

int main()
{
    int x;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    if (x < 10)
        goto a; // label a
    else
        goto b; // label b

a:
    printf("Value is lesser than 10.\n");
    printf("Thank you!\n");

b:
    printf("Good bye!\n");

    return 0;
}

