/*
Day: 35
Question: Q69
Title: Second Largest Element in an Array
Problem:
Find the second largest element in an array.
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100];
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 elements\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = second = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    /* Handle case where all elements are equal or second not updated properly */
    if (first == second) {
        second = -1; /* indicate no second largest if all same */
        for (i = 0; i < n; i++) {
            if (arr[i] < first) {
                if (second == -1 || arr[i] > second)
                    second = arr[i];
            }
        }
    }

    if (second == -1 || second == first)
        printf("No distinct second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
