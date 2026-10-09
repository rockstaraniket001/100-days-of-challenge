/*
Day: 58
Question: Q108
Title: Product of Array Except Self
Problem:
Print answer[] where answer[i] is product of all elements except nums[i]. Optional O(n) without division.
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int nums[100];
    long long answer[100];
    long long left = 1, right = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    /* Left products */
    for (i = 0; i < n; i++) {
        answer[i] = left;
        left *= nums[i];
    }

    /* Multiply by right products */
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }

    for (i = 0; i < n; i++) {
        printf("%lld", answer[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
