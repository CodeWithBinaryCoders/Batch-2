#include <stdio.h>

void change(int val)
{
    val = 10; // local to change()
}

int main()
{
    int val = 5; // local to main()

    change(val); // call by value

    printf("%d\n", val); // 5

    return 0;
}