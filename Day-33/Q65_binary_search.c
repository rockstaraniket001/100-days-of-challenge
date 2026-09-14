/*
Day: 33
Question: Q65
Title: Binary Search in Sorted Array
Problem:
Search in a sorted array using binary search.
*/

#include <stdio.h>

int main(void)
{
    int n, i, key, low, high, mid, found = 0;
    int arr[100];

    printf("Enter number of elements (sorted ascending): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}
