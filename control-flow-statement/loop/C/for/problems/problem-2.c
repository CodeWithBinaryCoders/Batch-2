# include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the limit : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i;

    printf("Sum is %d\n", sum);
}