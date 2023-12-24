#include <stdio.h>
int main()
{
    
    printf("%d\n", 5 < 6); // true
    printf("%d\n", 5 == 6); // false
    printf("%d\n", 5 != 6); // true

    int myVar = 0;
    _Bool check = 0; // indicating a boolean variable

    printf("My check value is %d\n", check);

    _Bool myBoolean = 56;

    printf("MyBoolean value is %d\n", myBoolean); // any non zero value is true

    myBoolean = -404;


    printf("MyBoolean value is %d\n", myBoolean);

    myBoolean = -0;


    printf("MyBoolean value is %d\n", myBoolean);


    return 0;
}
