#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Hello\n");
    }
    
    printf("Value of i is %d\n", i); // i is undeclared here

    return 0;
}

