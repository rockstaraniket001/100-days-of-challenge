/*
Day: 67
Question: Q117
Title: Merge Two Sorted Arrays
Problem:
Merge two sorted arrays so the result is sorted and print it.
*/

#include <stdio.h>

int main(void)
{
    int m, n, i, j, k;
    int a[100], b[100], merged[200];

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter %d elements:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < m)
        merged[k++] = a[i++];
    while (j < n)
        merged[k++] = b[j++];

    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
