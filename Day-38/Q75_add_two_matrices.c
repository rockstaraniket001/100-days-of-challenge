/*
Day: 38
Question: Q75
Title: Add Two Matrices
Problem:
Add two matrices.
*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j;
    int a[20][20], b[20][20], sum[20][20];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
