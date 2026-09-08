/*
Day: 27
Question: Q54
Title: Centered Diamond Star Pattern
Problem:
Print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(void)
{
    int i, j, space;
    int n = 4;  /* number of rows in upper half including middle */

    /* Upper half including middle */
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
