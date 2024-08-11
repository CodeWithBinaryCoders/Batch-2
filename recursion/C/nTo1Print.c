#include <stdio.h>

void display(int n)
{
    if (!n) // if (n == 0)
        return;
    
    printf("%d ", n);
    display(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    display(n);
    printf("\n");

    return 0;
}
