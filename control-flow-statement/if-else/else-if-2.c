#include <stdio.h>
int main()
{
    int budget = 55000;

    if (budget >= 90000)
        printf("Go to Maldives\n");
    else if (budget >= 70000)
        printf("Go to Goa\n");
    else if (budget >= 40000)
        printf("Go to ITC\n");
    else
        printf("Go to sleep\n");

    return 0;
}