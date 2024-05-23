#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str); // & is not needed
    printf("You entered: %s\n", str);

    return 0;
}

// Enter a string : Avik
// You entered: Avik