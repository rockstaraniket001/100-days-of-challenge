/*
Day: 69
Question: Q119
Title: Find the Repeated Element
Problem:
Array where only one element is repeated. Print the repeated element. Prefer one iteration.
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100];
    int seen[1000] = {0}; /* assuming values in reasonable range */
    int repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements (one is repeated):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0 && arr[i] < 1000) {
            if (seen[arr[i]]) {
                repeated = arr[i];
            } else {
                seen[arr[i]] = 1;
            }
        }
    }

    printf("%d\n", repeated);

    return 0;
}
