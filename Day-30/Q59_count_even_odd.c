/*
Day: 30
Question: Q59
Title: Count Even and Odd Numbers in an Array
Problem:
Count even and odd numbers in an array.
*/

#include <stdio.h>

int main(void)
{
    int n, i, even = 0, odd = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
