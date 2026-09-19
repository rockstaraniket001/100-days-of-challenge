/*
Day: 38
Question: Q76
Title: Check if a Matrix is Symmetric
Problem:
Check if a matrix is symmetric.
*/

#include <stdio.h>

int main(void)
{
    int n, i, j, is_sym = 1;
    int mat[20][20];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                is_sym = 0;
                break;
            }
        }
        if (!is_sym)
            break;
    }

    if (is_sym)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}
