/*
Day: 28
Question: Q55
Title: Print All Prime Numbers from 1 to n
Problem:
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int is_prime(int num)
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (is_prime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
