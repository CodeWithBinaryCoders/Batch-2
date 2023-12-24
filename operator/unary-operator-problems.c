#include <stdio.h>
int main()
{
    int a = 5, b = 6;

    b++;

    ++a;

    int y = a++;

    int z = ++b;

    

    int sum = y + z;

    printf("%d\n", sum++);
    printf("%d\n", ++sum);
    
    return 0;
}