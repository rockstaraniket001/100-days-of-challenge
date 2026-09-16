/*
Day: 35
Question: Q70
Title: Rotate Array to the Right by k Positions
Problem:
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main(void)
{
    int n, k, i, j, temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (positions to rotate right): ");
    scanf("%d", &k);

    if (n == 0) {
        printf("Empty array\n");
        return 0;
    }

    k = k % n;
    if (k < 0)
        k += n;

    /* Rotate right by k using temporary */
    for (j = 0; j < k; j++) {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
    }

    printf("Array after right rotation by %d:\n", k);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
