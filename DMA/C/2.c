#include <stdlib.h>

int *func()
{
    int *a = malloc(sizeof (int)); // allocate memory in heap
    *a = 5; // assign value to the memory

    return a; // return the address of the allocated memory
}

int main()
{
    int *a = func(); // call the function and get the address of the allocated memory

    int printf(const char *, ...); // declaration of printf

    printf("%d\n", *a); // print the value

    return 0;
}

