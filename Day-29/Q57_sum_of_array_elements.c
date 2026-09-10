/*
Day: 29
Question: Q57
Title: Find the Sum of Array Elements
Problem:
Find the sum of array elements.
*/

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
