/*
Day: 59
Question: Q109
Title: Maximum Sum of Subarray of Size k
Problem:
Print the maximum sum among all subarrays of size k.
*/

#include <stdio.h>

int main(void)
{
    int n, k, i;
    int arr[100];
    int max_sum, window_sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 1;
    }

    for (i = 0; i < k; i++)
        window_sum += arr[i];
    max_sum = window_sum;

    for (i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("%d\n", max_sum);

    return 0;
}
