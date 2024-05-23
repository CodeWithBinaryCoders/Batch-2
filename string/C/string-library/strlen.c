#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    gets(str);

    printf("Length of the string is %d\n", strlen(str)); 

    return 0;
}
