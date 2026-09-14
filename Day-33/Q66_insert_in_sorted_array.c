/*
Day: 33
Question: Q66
Title: Insert Element in Sorted Array
Problem:
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main(void)
{
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements (sorted ascending): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    /* Find position */
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

    /* Shift elements */
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = key;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
