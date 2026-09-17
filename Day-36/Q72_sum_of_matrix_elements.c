/*
Day: 36
Question: Q72
Title: Sum of All Elements in a Matrix
Problem:
Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, sum = 0;
    int mat[20][20];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
