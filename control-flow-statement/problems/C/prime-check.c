#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num); // 13

    if (num < 2) // if invalid input
        printf("Invalid input.\n");
    else // if valid input
    {    
        // 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
        for (int i = 2; i < num; i++)
        {
            // if any i divides num completely, stop and conclude non-prime
            if (num % i == 0) // completely divisible
            {
                printf("%d is non-prime.\n", num);
                return 1;
                // exit(1);
            }
        }

        printf("%d is prime.\n", num);
    }
    return 0;
}

