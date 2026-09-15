/*
Day: 34
Question: Q68
Title: Delete an Element from an Array
Problem:
Delete an element from an array.
*/

#include <stdio.h>

int main(void)
{
    int n, i, key, pos = -1;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
