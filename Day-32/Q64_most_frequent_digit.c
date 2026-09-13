/*
Day: 32
Question: Q64
Title: Most Frequent Digit in an Integer
Problem:
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main(void)
{
    long long num;
    int count[10] = {0};
    int digit, max_count = 0, result = 0;
    int i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0) {
        printf("Most frequent digit: 0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            result = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", result, max_count);

    return 0;
}
