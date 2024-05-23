// reverse a string without using string.h library

#include <stdio.h>
int main()
{
    char str[10];
    gets(str);

    // calculate the length of the string

    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    // reverse the string

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // print the reversed string

    puts(str);

    return 0;
}