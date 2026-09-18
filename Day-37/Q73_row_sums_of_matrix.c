/*
Day: 37
Question: Q73
Title: Sum of Each Row of a Matrix
Problem:
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j;
    int mat[20][20];
    int row_sum[20];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            row_sum[i] += mat[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    return 0;
}
