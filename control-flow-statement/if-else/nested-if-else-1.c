#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isRaining = false, haveUmbrella = true, friendsComing = false;

    if (isRaining == true)

        if (haveUmbrella == true)
            printf("Go to school\n");
        else
        {
            printf("Buy Umbrella\n");
            printf("Pay bill\n");
        }

    else

        if (friendsComing == true)
        printf("Bunk school\n");
    else
        printf("Watch movie\n");

    return 0;
}
