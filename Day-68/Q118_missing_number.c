/*
Day: 68
Question: Q118
Title: Missing Number
Problem:
Array of size n contains all integers between 0 and n except one. Print the missing number.
*/

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0, expected;
    int arr[100];

    printf("Enter n (array size): ");
    scanf("%d", &n);
    printf("Enter %d elements (0 to n missing one):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected = n * (n + 1) / 2;
    printf("%d\n", expected - sum);

    return 0;
}
