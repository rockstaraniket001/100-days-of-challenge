/*
 * Day 23 - Q46 (Nested Loops without Arrays/Strings):
 * Write a program to print the following pattern:
 * *****
 * *****
 * *****
 * *****
 * *****
 */
#include <stdio.h>

int main(void) {
    int rows = 5, cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}