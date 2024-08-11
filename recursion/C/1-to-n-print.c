#include <stdio.h>

void display(int n)
{
    if (!n) // if (n == 0)
        return;
    
    display(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;
    scanf("%d", &n);

    display(n);
    printf("\n");

    return 0;
}
