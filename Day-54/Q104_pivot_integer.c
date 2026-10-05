/*
Day: 54
Question: Q104
Title: Pivot Integer
Problem:
Find pivot integer x such that sum(1..x) == sum(x..n). Print x or -1.
*/

#include <stdio.h>

int main(void)
{
    int n, x;
    long long left, right;
    int found = 0;

    printf("Enter positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        left = (long long)x * (x + 1) / 2;
        right = (long long)n * (n + 1) / 2 - (long long)(x - 1) * x / 2;
        if (left == right) {
            printf("%d\n", x);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}
