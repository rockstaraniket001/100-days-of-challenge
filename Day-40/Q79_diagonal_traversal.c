/*
Day: 40
Question: Q79
Title: Diagonal Traversal of a Matrix
Problem:
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main(void)
{
    int rows, cols, i, j;
    int mat[20][20];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Diagonal traversal:\n");

    /* Traverse all diagonals starting from top row */
    for (int d = 0; d < rows + cols - 1; d++) {
        for (i = 0; i < rows; i++) {
            j = d - i;
            if (j >= 0 && j < cols) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
