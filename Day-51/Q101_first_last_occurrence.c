/*
Day: 51
Question: Q101
Title: First and Last Occurrence of Target in Sorted Array
Problem:
Take a sorted array nums[] and an integer target. Print the index of the first and last occurrence of target. Print -1, -1 if not present.
Optional: O(log n)
*/

#include <stdio.h>

int main(void)
{
    int n, target, i;
    int nums[100];
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    /* Linear for simplicity (still correct); can be binary search */
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d\n", first, last);

    return 0;
}
