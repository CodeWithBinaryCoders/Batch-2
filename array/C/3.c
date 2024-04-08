#include <stdio.h>

int main()
{
    int num[5];

    for (int i = 0; i < 5; i++) // 5
    {
        printf("Enter value for index - %d : ", i);
        scanf("%d", &num[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) // 0
        printf("Value at index - %d is %d\n",i, num[i]);

    return 0;
}

