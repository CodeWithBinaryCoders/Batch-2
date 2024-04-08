#include <stdio.h>

int main()
{
    char luckyAlphabet[5]; // declaration of array

    luckyAlphabet[0] = 'A';
    luckyAlphabet[1] = 'C';
    luckyAlphabet[4] = 'M';
    luckyAlphabet[2] = 'Z';
    luckyAlphabet[3] = 'S';

    printf("%c\n", luckyAlphabet[0]);
    printf("%c\n", luckyAlphabet[1]);
    printf("%c\n", luckyAlphabet[2]);
    printf("%c\n", luckyAlphabet[3]);
    printf("%c\n", luckyAlphabet[4]);

    return 0;
}


