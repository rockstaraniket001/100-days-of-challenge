/*
Day: 63
Question: Q113
Title: Kth Smallest Element
Problem:
Find and print the kth smallest element.
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
    printf("Enter k: ");
    scanf("%d", &k);

    /* Simple selection sort for first k */
    for (i = 0; i < k; i++) {
        int min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}
