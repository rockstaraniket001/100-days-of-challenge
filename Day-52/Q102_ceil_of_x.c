/*
Day: 52
Question: Q102
Title: Ceil of x in Sorted Array
Problem:
Find the 0-based index of the smallest element greater than or equal to x. If none, print -1. First occurrence for multiples.
*/

#include <stdio.h>

int main(void)
{
    int n, x, i;
    int arr[100];
    int result = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}
