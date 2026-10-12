/*
Day: 61
Question: Q111
Title: First Negative Integer in Every Window of Size k
Problem:
Find the first negative integer in each subarray of size k. If none, print 0. Results separated by spaces.
*/

#include <stdio.h>

int main(void)
{
    int n, k, i, j, found;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }
    printf("\n");

    return 0;
}
