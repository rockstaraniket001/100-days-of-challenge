/*
Day: 56
Question: Q106
Title: Next Greater Element (Brute Force)
Problem:
Find the next greater element for each element (nearest greater on right). Print -1 if none. Comma-separated. No Stack.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, next;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");

    return 0;
}
