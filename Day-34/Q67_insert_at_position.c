/*
Day: 34
Question: Q67
Title: Insert Element at Given Position
Problem:
Insert an element in an array at a given position.
*/

#include <stdio.h>

int main(void)
{
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);
    printf("Enter position (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }

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
