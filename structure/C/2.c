#include <stdio.h>

struct student // structure definition
{
    // member variables
    int roll;
    int enr;
} avik, alik; // structure variable

int main()
{
    avik.roll = 12;
    avik.enr = 1234;

    scanf("%d", &alik.roll);
    scanf("%d", &alik.enr);

    printf("Avik's roll no is %d and enrollment no is %d\n", avik.roll, avik.enr);
    printf("Alik's roll no is %d and enrollment no is %d\n", alik.roll, alik.enr);

    return 0;
}


