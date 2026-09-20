/*
Day: 39
Question: Q78
Title: Sum of Main Diagonal Elements
Problem:
Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, sum = 0;
    int mat[20][20];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        sum += mat[i][i];

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
