#include <stdio.h>

struct student // structure definition
{
    // member variables
    int roll;
    int enr;
};

int main()
{

    struct student avik, alik; // structure variable

    avik.roll = 12;
    avik.enr = 1234;

    scanf("%d", &alik.roll);
    scanf("%d", &alik.enr);

    printf("Avik's roll no is %d and enrollment no is %d\n", avik.roll, avik.enr);
    printf("Alik's roll no is %d and enrollment no is %d\n", alik.roll, alik.enr);

    return 0;
}
