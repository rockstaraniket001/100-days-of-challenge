/*
Day: 53
Question: Q103
Title: Pivot Index of Array
Problem:
Find the leftmost pivot index where left sum equals right sum. Print -1 if none.
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100];
    int total = 0, left = 0;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            pivot = i;
            break;
        }
        left += arr[i];
    }

    printf("%d\n", pivot);

    return 0;
}
