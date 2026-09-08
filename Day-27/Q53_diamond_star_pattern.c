/*
Day: 27
Question: Q53
Title: Diamond Star Pattern (Odd Rows)
Problem:
Print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;  /* number of rows in upper half including middle */

    /* Upper half including middle */
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
