/*
Day: 88
Question: Q138
Title: Print All Enum Names and Values Using Loop
Problem:
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main(void)
{
    /* Since C enums don't store names, we print known values */
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    int i;

    for (i = RED; i <= YELLOW; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
