#include <stdlib.h>

int main()
{
    int *a = malloc(sizeof (int)); // allocate memory in heap
    *a = 5; // assign value to the memory

    int printf(const char *, ...); // declaration of printf

    printf("%d\n", *a); // print the value

    return 0;
}