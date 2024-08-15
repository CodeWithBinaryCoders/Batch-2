#include <stdio.h>

void bestSolHanoi(int, char, char, char); // function prototype

int main()
{
    int diskCount;
    printf("Enter the number of disks: ");
    scanf("%d", &diskCount);
    bestSolHanoi(diskCount, 'A', 'B', 'C'); // function call
    return 0;
}

void bestSolHanoi(int diskCount, char src, char dest, char temp) // function definition
{
    if (1 == diskCount)
    {
        printf("Move disk %d from %c to %c\n", diskCount, src, dest);
        return;
    }

    bestSolHanoi(diskCount - 1, src, temp, dest);
    printf("Move disk %d from %c to %c\n", diskCount, src, dest);
    bestSolHanoi(diskCount - 1, temp, dest, src);
}