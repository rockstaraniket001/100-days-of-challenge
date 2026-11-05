/*
Day: 85
Question: Q135
Title: Explicit Enum Values Starting from 10
Problem:
Assign explicit enum values starting from 10 and print them.
*/

#include <stdio.h>

enum Numbers {
    ONE = 10,
    TWO,
    THREE,
    FOUR
};

int main(void)
{
    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);

    return 0;
}
