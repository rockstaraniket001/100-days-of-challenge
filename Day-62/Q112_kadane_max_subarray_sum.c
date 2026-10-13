/*
Day: 62
Question: Q112
Title: Maximum Subarray Sum (Kadane's Algorithm)
Problem:
Find the maximum sum of any contiguous subarray using Kadane's. If all negative, print the largest element.
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int arr[100];
    int max_ending, max_so_far;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max_ending = max_so_far = arr[0];
    for (i = 1; i < n; i++) {
        if (max_ending + arr[i] > arr[i])
            max_ending = max_ending + arr[i];
        else
            max_ending = arr[i];

        if (max_ending > max_so_far)
            max_so_far = max_ending;
    }

    printf("%d\n", max_so_far);

    return 0;
}
