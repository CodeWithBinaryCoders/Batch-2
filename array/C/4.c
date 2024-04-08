/*

Write a C program to take the array elements as input from the user and print those elements in the output console. Take the size of the array from the user.

INPUT format:

First line will contain the size of the array
Second line will contain the input elements (space separated)

OUTPUT format:

Array elements will be printed on a single line (space separated)


Example:
5 (input)
12 45 6 26 5 (input)
12 45 6 26 5 (output)

*/

#include <stdio.h>

int main()
{
    int n; // array size

    scanf("%d", &n); // enter the array size

    int arr[n]; // create array of size n

    // input
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // output
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}