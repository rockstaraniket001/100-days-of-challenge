/*
Day: 55
Question: Q105
Title: Majority Element
Problem:
Print the majority element (appears > floor(n/2) times). Print -1 if none.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, count, majority = -1;
    int nums[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);

    return 0;
}
