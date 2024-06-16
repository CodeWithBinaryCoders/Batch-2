#include <stdio.h>


int main()
{

    void sayHello(); // function declaration / function prototype
    sayHello(); // function call

    return 0;
}

void sayHello() // function definition
{
    printf("Hi there.\n");
    printf("Welcome to Binary Learn!\n");
}