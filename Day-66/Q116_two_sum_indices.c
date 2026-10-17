/*
Day: 66
Question: Q116
Title: Two Sum - Find Indices
Problem:
Find two distinct indices i and j such that nums[i] + nums[j] = target. Print indices or "-1 -1".
*/

#include <stdio.h>

int main(void)
{
    int n, target, i, j, found = 0;
    int nums[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d positive integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}
