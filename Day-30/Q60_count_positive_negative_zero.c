/*
Day: 30
Question: Q60
Title: Count Positive, Negative, and Zero Elements
Problem:
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main(void)
{
    int n, i, pos = 0, neg = 0, zero = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);

    return 0;
}
