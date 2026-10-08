/*
Day: 57
Question: Q107
Title: Previous Greater Element (Brute Force)
Problem:
Find the previous greater element for each element (nearest greater on left). Print -1 if none. Comma-separated. No Stack.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, prev;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");

    return 0;
}
