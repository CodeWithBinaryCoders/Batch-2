// check equal strings without using string.h library

#include <stdio.h>
int main()
{
    char str1[10], str2[10];

    gets(str1);
    gets(str2);

    // calculate length of the strings

    int len1 = 0, len2 = 0;

    int i = 0;
    while (str1[i] != '\0')
    {
        len1++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0')
    {
        len2++;
        i++;
    }

    // check if the strings are equal

    if (len1 != len2)
    {
        printf("The strings are not equal\n");
        return 0;
    }

    for (int i = 0; i < len1; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("The strings are not equal\n");
            return 0;
        }
    }

    printf("The strings are equal\n");

    return 0;
}
