/*
Day: 60
Question: Q110
Title: Maximum Element in Each Window of Size k
Problem:
Find the maximum element in each subarray/window of size k and print results separated by spaces.
*/

#include <stdio.h>

int main(void)
{
    int n, k, i, j, max;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}
